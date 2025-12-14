/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97619
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
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))));
    var_20 &= ((/* implicit */_Bool) var_14);
    var_21 = ((/* implicit */_Bool) (unsigned short)24576);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */int) min((323351631371911325LL), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))) < (8004453643207425140LL)))) ^ (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_23 |= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)-61)) ? (((((/* implicit */_Bool) -1279403994)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-79))) : (8004453643207425154LL))) : (-8004453643207425155LL))), (((/* implicit */long long int) arr_10 [i_2]))));
                                arr_14 [i_0] [1LL] = ((/* implicit */unsigned short) (_Bool)1);
                                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_0 [i_1] [i_0])) + (arr_3 [i_4 - 2])))) ? (((((/* implicit */_Bool) 8004453643207425115LL)) ? (8004453643207425140LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)92)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152)))))));
                                var_25 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [i_0] [i_4 - 1] [i_1] [i_4 - 2])) ? (arr_7 [(unsigned char)0] [i_2] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(signed char)1] [(signed char)1] [i_3])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_8 [(signed char)7] [i_2] [i_2] [i_5]))) ? (arr_11 [(unsigned short)10] [i_2] [i_2] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned long long int) -1073741824))));
                        var_27 -= max((((/* implicit */unsigned int) (_Bool)1)), (255U));
                    }
                }
            }
        } 
    } 
}
