/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85020
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
    var_16 = ((/* implicit */long long int) max((((/* implicit */int) (short)3112)), (min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) (short)-3100)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)16384))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [(unsigned char)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1961726272)) ? (((/* implicit */int) (unsigned short)16384)) : (((/* implicit */int) (short)-3100))));
                    var_17 = ((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */_Bool) (unsigned short)12216)) ? (((/* implicit */int) (short)3099)) : (((/* implicit */int) (unsigned short)1536))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)3112)), (min(((unsigned short)0), ((unsigned short)32760))))))));
                    var_18 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)3099)) ? (((/* implicit */int) (unsigned short)41704)) : (((((/* implicit */_Bool) (short)-3085)) ? (523776) : (((/* implicit */int) (short)3085))))))) > (max((((/* implicit */long long int) (signed char)-37)), (((((/* implicit */_Bool) -1961726294)) ? (((/* implicit */long long int) 4255051080U)) : (-2349584888050039366LL))))));
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 4185495280U)) ? (min((((/* implicit */unsigned int) (unsigned char)54)), (1412722976U))) : (((/* implicit */unsigned int) max((1961726293), (((/* implicit */int) (unsigned short)49151))))))) + (((/* implicit */unsigned int) ((2100646899) - (((/* implicit */int) ((-1961726273) <= (((/* implicit */int) (_Bool)1))))))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 1412722976U)) || (((/* implicit */_Bool) (unsigned short)41704))))) + (((((/* implicit */_Bool) 4161259105663279903LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49151))))))) ? (min((((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (4185495280U))), (((/* implicit */unsigned int) (unsigned char)48)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 6LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1412722978U))))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned short)8)) < (((/* implicit */int) (_Bool)1)))))), (((unsigned long long int) ((unsigned int) (unsigned short)65527)))));
}
