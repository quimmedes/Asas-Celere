extern "C" void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_SharedInternals();
	RegisterModule_SharedInternals();

	void RegisterModule_Core();
	RegisterModule_Core();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_InputLegacy();
	RegisterModule_InputLegacy();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_RuntimeInitializeOnLoadManagerInitializer();
	RegisterModule_RuntimeInitializeOnLoadManagerInitializer();

	void RegisterModule_WebGL();
	RegisterModule_WebGL();

}

template <typename T> void RegisterUnityClass(const char*);
template <typename T> void RegisterStrippedType(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

class EditorExtension; template <> void RegisterUnityClass<EditorExtension>(const char*);
namespace Unity { class Component; } template <> void RegisterUnityClass<Unity::Component>(const char*);
class Behaviour; template <> void RegisterUnityClass<Behaviour>(const char*);
class Animation; 
class Animator; 
namespace Unity { class ArticulationBody; } 
class AudioBehaviour; template <> void RegisterUnityClass<AudioBehaviour>(const char*);
class AudioListener; template <> void RegisterUnityClass<AudioListener>(const char*);
class AudioSource; 
class AudioFilter; 
class AudioChorusFilter; 
class AudioDistortionFilter; 
class AudioEchoFilter; 
class AudioHighPassFilter; 
class AudioLowPassFilter; 
class AudioReverbFilter; 
class AudioReverbZone; 
class Camera; template <> void RegisterUnityClass<Camera>(const char*);
namespace UI { class Canvas; } 
namespace UI { class CanvasGroup; } 
namespace Unity { class Cloth; } 
class Collider2D; 
class BoxCollider2D; 
class CapsuleCollider2D; 
class CircleCollider2D; 
class CompositeCollider2D; 
class EdgeCollider2D; 
class PolygonCollider2D; 
class TilemapCollider2D; 
class ConstantForce; 
class Effector2D; 
class AreaEffector2D; 
class BuoyancyEffector2D; 
class PlatformEffector2D; 
class PointEffector2D; 
class SurfaceEffector2D; 
class FlareLayer; 
class GridLayout; 
class Grid; 
class Tilemap; 
class Halo; 
class HaloLayer; 
class IConstraint; 
class AimConstraint; 
class LookAtConstraint; 
class ParentConstraint; 
class PositionConstraint; 
class RotationConstraint; 
class ScaleConstraint; 
class Joint2D; 
class AnchoredJoint2D; 
class DistanceJoint2D; 
class FixedJoint2D; 
class FrictionJoint2D; 
class HingeJoint2D; 
class SliderJoint2D; 
class SpringJoint2D; 
class WheelJoint2D; 
class RelativeJoint2D; 
class TargetJoint2D; 
class LensFlare; 
class Light; template <> void RegisterUnityClass<Light>(const char*);
class LightProbeGroup; 
class LightProbeProxyVolume; 
class MonoBehaviour; template <> void RegisterUnityClass<MonoBehaviour>(const char*);
class NavMeshAgent; 
class NavMeshObstacle; 
class OffMeshLink; 
class ParticleSystemForceField; 
class PhysicsUpdateBehaviour2D; 
class ConstantForce2D; 
class PlayableDirector; 
class Projector; 
class ReflectionProbe; template <> void RegisterUnityClass<ReflectionProbe>(const char*);
class Skybox; 
class SortingGroup; 
class StreamingController; 
class Terrain; 
class VideoPlayer; 
class VisualEffect; 
class WindZone; 
namespace UI { class CanvasRenderer; } 
class Collider; template <> void RegisterUnityClass<Collider>(const char*);
class BoxCollider; template <> void RegisterUnityClass<BoxCollider>(const char*);
class CapsuleCollider; template <> void RegisterUnityClass<CapsuleCollider>(const char*);
class CharacterController; 
class MeshCollider; template <> void RegisterUnityClass<MeshCollider>(const char*);
class SphereCollider; 
class TerrainCollider; 
class WheelCollider; 
namespace Unity { class Joint; } 
namespace Unity { class CharacterJoint; } 
namespace Unity { class ConfigurableJoint; } 
namespace Unity { class FixedJoint; } 
namespace Unity { class HingeJoint; } 
namespace Unity { class SpringJoint; } 
class LODGroup; 
class MeshFilter; template <> void RegisterUnityClass<MeshFilter>(const char*);
class OcclusionArea; 
class OcclusionPortal; 
class ParticleSystem; 
class Renderer; template <> void RegisterUnityClass<Renderer>(const char*);
class BillboardRenderer; 
class LineRenderer; 
class MeshRenderer; template <> void RegisterUnityClass<MeshRenderer>(const char*);
class ParticleSystemRenderer; 
class SkinnedMeshRenderer; 
class SpriteMask; 
class SpriteRenderer; 
class SpriteShapeRenderer; 
class TilemapRenderer; 
class TrailRenderer; 
class VFXRenderer; 
class Rigidbody; template <> void RegisterUnityClass<Rigidbody>(const char*);
class Rigidbody2D; 
namespace TextRenderingPrivate { class TextMesh; } 
class Transform; template <> void RegisterUnityClass<Transform>(const char*);
namespace UI { class RectTransform; } template <> void RegisterUnityClass<UI::RectTransform>(const char*);
class Tree; 
class GameObject; template <> void RegisterUnityClass<GameObject>(const char*);
class NamedObject; template <> void RegisterUnityClass<NamedObject>(const char*);
class AssetBundle; 
class AssetBundleManifest; 
class AudioMixer; 
class AudioMixerController; 
class AudioMixerGroup; 
class AudioMixerGroupController; 
class AudioMixerSnapshot; 
class AudioMixerSnapshotController; 
class Avatar; 
class AvatarMask; 
class BillboardAsset; 
class ComputeShader; template <> void RegisterUnityClass<ComputeShader>(const char*);
class Flare; 
namespace TextRendering { class Font; } 
class LightProbes; template <> void RegisterUnityClass<LightProbes>(const char*);
class LightingSettings; template <> void RegisterUnityClass<LightingSettings>(const char*);
class LocalizationAsset; 
class Material; template <> void RegisterUnityClass<Material>(const char*);
class ProceduralMaterial; 
class Mesh; template <> void RegisterUnityClass<Mesh>(const char*);
class Motion; 
class AnimationClip; 
class NavMeshData; 
class OcclusionCullingData; 
class PhysicMaterial; 
class PhysicsMaterial2D; 
class PreloadData; template <> void RegisterUnityClass<PreloadData>(const char*);
class RayTracingShader; 
class RuntimeAnimatorController; 
class AnimatorController; 
class AnimatorOverrideController; 
class SampleClip; template <> void RegisterUnityClass<SampleClip>(const char*);
class AudioClip; template <> void RegisterUnityClass<AudioClip>(const char*);
class Shader; template <> void RegisterUnityClass<Shader>(const char*);
class ShaderVariantCollection; 
class SpeedTreeWindAsset; 
class Sprite; template <> void RegisterUnityClass<Sprite>(const char*);
class SpriteAtlas; 
class SubstanceArchive; 
class TerrainData; 
class TerrainLayer; 
class TextAsset; template <> void RegisterUnityClass<TextAsset>(const char*);
class MonoScript; template <> void RegisterUnityClass<MonoScript>(const char*);
class Texture; template <> void RegisterUnityClass<Texture>(const char*);
class BaseVideoTexture; 
class WebCamTexture; 
class CubemapArray; template <> void RegisterUnityClass<CubemapArray>(const char*);
class LowerResBlitTexture; template <> void RegisterUnityClass<LowerResBlitTexture>(const char*);
class ProceduralTexture; 
class RenderTexture; template <> void RegisterUnityClass<RenderTexture>(const char*);
class CustomRenderTexture; 
class SparseTexture; 
class Texture2D; template <> void RegisterUnityClass<Texture2D>(const char*);
class Cubemap; template <> void RegisterUnityClass<Cubemap>(const char*);
class Texture2DArray; template <> void RegisterUnityClass<Texture2DArray>(const char*);
class Texture3D; template <> void RegisterUnityClass<Texture3D>(const char*);
class VideoClip; 
class VisualEffectObject; 
class VisualEffectAsset; 
class VisualEffectSubgraph; 
class GameManager; template <> void RegisterUnityClass<GameManager>(const char*);
class GlobalGameManager; template <> void RegisterUnityClass<GlobalGameManager>(const char*);
class AudioManager; template <> void RegisterUnityClass<AudioManager>(const char*);
class BuildSettings; template <> void RegisterUnityClass<BuildSettings>(const char*);
class DelayedCallManager; template <> void RegisterUnityClass<DelayedCallManager>(const char*);
class GraphicsSettings; template <> void RegisterUnityClass<GraphicsSettings>(const char*);
class InputManager; template <> void RegisterUnityClass<InputManager>(const char*);
class MonoManager; template <> void RegisterUnityClass<MonoManager>(const char*);
class NavMeshProjectSettings; 
class Physics2DSettings; 
class PhysicsManager; template <> void RegisterUnityClass<PhysicsManager>(const char*);
class PlayerSettings; template <> void RegisterUnityClass<PlayerSettings>(const char*);
class QualitySettings; template <> void RegisterUnityClass<QualitySettings>(const char*);
class ResourceManager; template <> void RegisterUnityClass<ResourceManager>(const char*);
class RuntimeInitializeOnLoadManager; template <> void RegisterUnityClass<RuntimeInitializeOnLoadManager>(const char*);
class ScriptMapper; template <> void RegisterUnityClass<ScriptMapper>(const char*);
class StreamingManager; 
class TagManager; template <> void RegisterUnityClass<TagManager>(const char*);
class TimeManager; template <> void RegisterUnityClass<TimeManager>(const char*);
class UnityConnectSettings; 
class VFXManager; 
class LevelGameManager; template <> void RegisterUnityClass<LevelGameManager>(const char*);
class LightmapSettings; template <> void RegisterUnityClass<LightmapSettings>(const char*);
class NavMeshSettings; 
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterUnityClass<RenderSettings>(const char*);

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 61 non stripped classes
	//0. AudioBehaviour
	RegisterUnityClass<AudioBehaviour>("Audio");
	//1. AudioClip
	RegisterUnityClass<AudioClip>("Audio");
	//2. AudioListener
	RegisterUnityClass<AudioListener>("Audio");
	//3. AudioManager
	RegisterUnityClass<AudioManager>("Audio");
	//4. SampleClip
	RegisterUnityClass<SampleClip>("Audio");
	//5. Behaviour
	RegisterUnityClass<Behaviour>("Core");
	//6. BuildSettings
	RegisterUnityClass<BuildSettings>("Core");
	//7. Camera
	RegisterUnityClass<Camera>("Core");
	//8. Unity::Component
	RegisterUnityClass<Unity::Component>("Core");
	//9. ComputeShader
	RegisterUnityClass<ComputeShader>("Core");
	//10. Cubemap
	RegisterUnityClass<Cubemap>("Core");
	//11. CubemapArray
	RegisterUnityClass<CubemapArray>("Core");
	//12. DelayedCallManager
	RegisterUnityClass<DelayedCallManager>("Core");
	//13. EditorExtension
	RegisterUnityClass<EditorExtension>("Core");
	//14. GameManager
	RegisterUnityClass<GameManager>("Core");
	//15. GameObject
	RegisterUnityClass<GameObject>("Core");
	//16. GlobalGameManager
	RegisterUnityClass<GlobalGameManager>("Core");
	//17. GraphicsSettings
	RegisterUnityClass<GraphicsSettings>("Core");
	//18. InputManager
	RegisterUnityClass<InputManager>("Core");
	//19. LevelGameManager
	RegisterUnityClass<LevelGameManager>("Core");
	//20. Light
	RegisterUnityClass<Light>("Core");
	//21. LightingSettings
	RegisterUnityClass<LightingSettings>("Core");
	//22. LightmapSettings
	RegisterUnityClass<LightmapSettings>("Core");
	//23. LightProbes
	RegisterUnityClass<LightProbes>("Core");
	//24. LowerResBlitTexture
	RegisterUnityClass<LowerResBlitTexture>("Core");
	//25. Material
	RegisterUnityClass<Material>("Core");
	//26. Mesh
	RegisterUnityClass<Mesh>("Core");
	//27. MeshFilter
	RegisterUnityClass<MeshFilter>("Core");
	//28. MeshRenderer
	RegisterUnityClass<MeshRenderer>("Core");
	//29. MonoBehaviour
	RegisterUnityClass<MonoBehaviour>("Core");
	//30. MonoManager
	RegisterUnityClass<MonoManager>("Core");
	//31. MonoScript
	RegisterUnityClass<MonoScript>("Core");
	//32. NamedObject
	RegisterUnityClass<NamedObject>("Core");
	//33. Object
	//Skipping Object
	//34. PlayerSettings
	RegisterUnityClass<PlayerSettings>("Core");
	//35. PreloadData
	RegisterUnityClass<PreloadData>("Core");
	//36. QualitySettings
	RegisterUnityClass<QualitySettings>("Core");
	//37. UI::RectTransform
	RegisterUnityClass<UI::RectTransform>("Core");
	//38. ReflectionProbe
	RegisterUnityClass<ReflectionProbe>("Core");
	//39. Renderer
	RegisterUnityClass<Renderer>("Core");
	//40. RenderSettings
	RegisterUnityClass<RenderSettings>("Core");
	//41. RenderTexture
	RegisterUnityClass<RenderTexture>("Core");
	//42. ResourceManager
	RegisterUnityClass<ResourceManager>("Core");
	//43. RuntimeInitializeOnLoadManager
	RegisterUnityClass<RuntimeInitializeOnLoadManager>("Core");
	//44. ScriptMapper
	RegisterUnityClass<ScriptMapper>("Core");
	//45. Shader
	RegisterUnityClass<Shader>("Core");
	//46. Sprite
	RegisterUnityClass<Sprite>("Core");
	//47. TagManager
	RegisterUnityClass<TagManager>("Core");
	//48. TextAsset
	RegisterUnityClass<TextAsset>("Core");
	//49. Texture
	RegisterUnityClass<Texture>("Core");
	//50. Texture2D
	RegisterUnityClass<Texture2D>("Core");
	//51. Texture2DArray
	RegisterUnityClass<Texture2DArray>("Core");
	//52. Texture3D
	RegisterUnityClass<Texture3D>("Core");
	//53. TimeManager
	RegisterUnityClass<TimeManager>("Core");
	//54. Transform
	RegisterUnityClass<Transform>("Core");
	//55. BoxCollider
	RegisterUnityClass<BoxCollider>("Physics");
	//56. CapsuleCollider
	RegisterUnityClass<CapsuleCollider>("Physics");
	//57. Collider
	RegisterUnityClass<Collider>("Physics");
	//58. MeshCollider
	RegisterUnityClass<MeshCollider>("Physics");
	//59. PhysicsManager
	RegisterUnityClass<PhysicsManager>("Physics");
	//60. Rigidbody
	RegisterUnityClass<Rigidbody>("Physics");

}
