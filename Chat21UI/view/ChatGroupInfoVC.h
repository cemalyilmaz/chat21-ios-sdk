//
//  ChatGroupInfoVC.h
//  Smart21
//
//  Created by Andrea Sponziello on 04/05/15.
//
//

#import <UIKit/UIKit.h>

@class ChatGroup;
@class ChatDiskImageCache;

@interface ChatGroupInfoVC : UITableViewController <UIActionSheetDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate>

//@property(strong, nonatomic) NSString *groupId;
@property(strong, nonatomic) ChatGroup *group;

@property (weak, nonatomic) IBOutlet UIImageView *profilePhotoImageView;
//@property (weak, nonatomic) IBOutlet UILabel *addPhotoLabelOverloaded;
// imagepicker
@property (nonatomic, strong) UIImagePickerController *imagePickerController;
@property (nonatomic, strong) UIImagePickerController *photoLibraryController;
@property (nonatomic, strong) UIImage *scaledImage;
@property (strong, nonatomic) UIImage *bigImage;
@property (assign, nonatomic) UIImage *currentProfilePhoto;
@property (assign, nonatomic) NSString *profileId;

@property (strong, nonatomic) ChatDiskImageCache *imageCache;

@property (weak, nonatomic) IBOutlet UILabel *groupNameLabel;
@property (weak, nonatomic) IBOutlet UILabel *membersLabel;
@property (weak, nonatomic) IBOutlet UILabel *createdOnLabel;
@property (weak, nonatomic) IBOutlet UILabel *createdByLabel;
@property (weak, nonatomic) IBOutlet UILabel *adminLabel;
@property (weak, nonatomic) IBOutlet UILabel *idLabel;


- (IBAction)unwindToGroupInfoVC:(UIStoryboardSegue*)sender;

@end
