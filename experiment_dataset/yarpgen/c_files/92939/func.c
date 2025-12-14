/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92939
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
    var_16 = ((/* implicit */int) (short)32757);
    /* LoopNest 2 */
    for (signed char i_0 = 4; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                            {
                                var_17 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32757)) ? (18428153143337894169ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1 + 2])))))) ? ((+(18590930371657447ULL))) : ((-(var_0)))));
                                var_18 = ((/* implicit */unsigned short) var_6);
                                var_19 -= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)38392)) ? (max((((/* implicit */long long int) (unsigned short)53112)), (-7187035301165883883LL))) : (max((((/* implicit */long long int) arr_9 [i_0])), (7681000524080971283LL)))))));
                            }
                            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                            {
                                var_20 = ((/* implicit */unsigned short) var_0);
                                var_21 = ((/* implicit */int) arr_9 [i_1]);
                                var_22 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) (signed char)-96)))))));
                            }
                            /* vectorizable */
                            for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                            {
                                var_23 = ((/* implicit */unsigned short) ((signed char) var_9));
                                var_24 = ((/* implicit */int) (~(18428153143337894168ULL)));
                                var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_0 - 2] [i_1] [i_0] [i_2] [i_3]))));
                            }
                            for (int i_7 = 0; i_7 < 21; i_7 += 1) 
                            {
                                var_26 = ((/* implicit */short) arr_4 [i_2] [(signed char)11]);
                                var_27 = min((((/* implicit */int) (signed char)-4)), (arr_17 [i_0] [i_0] [(signed char)3] [i_0] [i_7]));
                            }
                            var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */signed char) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0 - 4] [i_3 - 3] [i_3 - 3] [i_3 - 3] [(unsigned short)1])))))), (max((((/* implicit */signed char) arr_10 [i_0 - 1] [(unsigned short)15] [i_0] [i_2] [i_2])), (arr_0 [i_0] [i_0])))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) 18590930371657446ULL)))))))));
                            var_29 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (505490269344187148ULL)));
                            var_30 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2] [i_2])) * (((/* implicit */int) arr_12 [i_0] [i_0] [i_1 - 2] [(_Bool)1] [i_0])))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */_Bool) ((unsigned long long int) ((18446744073709551615ULL) & (((/* implicit */unsigned long long int) -1137205888)))));
                var_32 = ((/* implicit */signed char) ((((unsigned long long int) arr_2 [i_0 - 2])) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))));
            }
        } 
    } 
    var_33 = ((/* implicit */_Bool) var_13);
}
