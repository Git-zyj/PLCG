/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96276
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
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_6))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (var_10))) : (var_10)))), (var_4)));
    var_16 = ((/* implicit */_Bool) min((((unsigned int) 133169152)), (((/* implicit */unsigned int) (-(var_10))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 25; i_2 += 3) /* same iter space */
                {
                    var_17 |= ((/* implicit */unsigned int) var_14);
                    var_18 -= ((/* implicit */long long int) ((unsigned char) (-((-(var_11))))));
                }
                for (int i_3 = 0; i_3 < 25; i_3 += 3) /* same iter space */
                {
                    arr_13 [i_1] = ((/* implicit */short) (+(((/* implicit */int) (signed char)-1))));
                    arr_14 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) var_3);
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 2; i_4 < 23; i_4 += 4) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_0] [i_4] |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min(((+(var_10))), ((+(((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) ((arr_0 [i_3]) ? (((/* implicit */int) (short)26894)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((var_14) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)249)))))))));
                        arr_18 [i_0] [i_0] [i_0] [i_1] [i_4] [i_4] = ((/* implicit */signed char) max((max((((long long int) -2147483645)), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */long long int) arr_0 [i_0]))));
                    }
                    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 4) /* same iter space */
                    {
                        var_19 = (+(604815767));
                        var_20 += ((/* implicit */_Bool) min((-604815767), (((((/* implicit */int) arr_1 [i_5 + 2])) | (var_0)))));
                        arr_22 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1] [i_1]))));
                        var_21 = ((/* implicit */unsigned short) (+((((_Bool)1) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55950)))))));
                    }
                }
                var_22 = ((/* implicit */_Bool) arr_16 [i_0] [i_1] [i_0] [i_1] [i_0] [i_0]);
                arr_23 [i_0] [i_1] = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_0]))))), (var_1)));
                var_23 ^= ((/* implicit */unsigned long long int) var_0);
            }
        } 
    } 
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((var_7), (min((((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */int) var_5)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (var_10))))))))));
}
