/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64148
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
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned short)18035))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned char) arr_1 [i_2] [i_3]);
                            var_20 -= ((((((/* implicit */_Bool) arr_6 [i_3 + 3] [i_3] [i_1] [i_2] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12337))) : (((-2254164672179382549LL) * (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))))) / (min((((/* implicit */long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_2] [i_3]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_1]))) * (arr_4 [i_1] [i_1] [i_1]))))));
                            arr_8 [i_0] [i_1] [i_2] [i_1] [i_3] = ((/* implicit */long long int) ((signed char) ((max((((/* implicit */unsigned long long int) (unsigned short)50704)), (1364885466205334166ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)53844), (((/* implicit */unsigned short) (unsigned char)230)))))))));
                            var_21 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((int) (-(((/* implicit */int) var_11)))))), (max((((/* implicit */long long int) -1)), (min((arr_1 [i_3] [i_1]), (((/* implicit */long long int) (unsigned char)34))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18035)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (872786875) : (((/* implicit */int) (unsigned char)30))))) ? (arr_4 [i_1 - 1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)83))))))));
            }
        } 
    } 
    var_23 &= ((/* implicit */_Bool) (unsigned char)185);
    var_24 = ((/* implicit */signed char) var_11);
}
