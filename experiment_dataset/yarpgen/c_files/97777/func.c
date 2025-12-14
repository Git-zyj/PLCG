/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97777
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_13 = ((/* implicit */unsigned short) max((((signed char) -1271237066)), (((/* implicit */signed char) ((((/* implicit */int) var_4)) <= (((((/* implicit */int) (unsigned short)28470)) / (-772940991))))))));
    var_14 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((-996347955) > (((/* implicit */int) (unsigned char)79))))), (((((var_1) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) / (((/* implicit */unsigned long long int) ((1125899906842616LL) / (((/* implicit */long long int) ((/* implicit */int) var_3))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) max((((short) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */short) ((unsigned char) max((2147483626), (((/* implicit */int) (signed char)-16))))))));
                arr_6 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (unsigned char)216))))))))) >= (max((((/* implicit */unsigned int) max((-381624579), (((/* implicit */int) var_6))))), (max((((/* implicit */unsigned int) (signed char)83)), (1740428980U)))))));
                arr_7 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((-1439102885) / (((/* implicit */int) arr_3 [i_0]))))))), (max((max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (var_1))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))))));
                arr_8 [i_1] [4ULL] [i_0] = ((/* implicit */short) 16903868364248998690ULL);
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((max((381624584), (((/* implicit */int) var_4)))) != (((/* implicit */int) ((signed char) 1830441281))))) && (((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) (_Bool)1))))))));
}
