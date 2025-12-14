/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8019
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)-117)) ^ (((/* implicit */int) (signed char)31))));
                    var_15 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3963))) : (((((/* implicit */_Bool) (unsigned short)512)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))))))) ? (((/* implicit */int) ((unsigned char) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1] [(_Bool)1] [i_0 + 1])) ? (((/* implicit */int) arr_7 [(unsigned short)6])) : (((/* implicit */int) arr_2 [(signed char)15] [i_1] [i_2]))))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_5 [i_2] [i_2 + 1] [i_1 + 1] [i_0 - 2]))) / (((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1] [i_1 + 1] [i_0 - 2])) ? (((/* implicit */int) arr_5 [0] [i_2 + 1] [i_1 + 1] [i_0 - 2])) : (((/* implicit */int) arr_5 [i_2] [i_2 + 1] [i_1 + 1] [i_0 - 2]))))));
                    var_17 = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        for (short i_4 = 1; i_4 < 18; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 2) 
            {
                {
                    arr_16 [i_5] [i_5] [i_5] = ((/* implicit */short) var_3);
                    arr_17 [i_3] [i_3] [i_3] = ((/* implicit */signed char) 12102940864284130727ULL);
                }
            } 
        } 
    } 
    var_18 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 35182224605184ULL)) ? (((/* implicit */int) (signed char)51)) : ((+(((/* implicit */int) (signed char)-120))))));
}
