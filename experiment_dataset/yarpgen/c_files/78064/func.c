/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78064
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
    var_18 = ((/* implicit */long long int) (signed char)31);
    var_19 = var_6;
    var_20 |= min((((/* implicit */signed char) (_Bool)1)), ((signed char)11));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+((+(arr_3 [i_0 + 1]))))))));
        var_22 |= ((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) (signed char)31)), (2305842871774740480LL))));
        /* LoopSeq 1 */
        for (short i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) ((arr_4 [i_2] [i_2 - 1] [i_2 - 1]) > (arr_4 [i_2 - 1] [9U] [i_2 + 1])));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 1; i_4 < 18; i_4 += 4) 
                    {
                        {
                            var_24 |= ((/* implicit */unsigned long long int) (+(arr_5 [i_2 + 1] [i_4 - 1] [10U])));
                            var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [5LL]))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
                {
                    var_26 |= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned short)32965)) : (((/* implicit */int) (signed char)-1))));
                    var_27 = ((/* implicit */signed char) (+(((/* implicit */int) arr_12 [i_0 - 1] [i_0] [i_1 + 1] [i_5]))));
                    var_28 = ((/* implicit */long long int) ((arr_8 [i_1] [i_0 + 1] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) (signed char)97)))));
                    var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_16 [i_0 - 1] [i_0 - 1] [(_Bool)1] [(signed char)10] [i_0] [i_0 - 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-116)))))) ? (((/* implicit */int) (unsigned short)6173)) : (((/* implicit */int) arr_14 [(unsigned short)4] [i_2 - 1] [i_1] [i_1] [(unsigned short)4]))));
                }
                var_30 = ((/* implicit */unsigned int) min((var_30), (((unsigned int) (unsigned char)0))));
            }
            /* vectorizable */
            for (unsigned short i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
            {
                var_31 *= ((unsigned long long int) (signed char)2);
                var_32 = ((((/* implicit */_Bool) arr_20 [i_6 + 2] [i_1 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */int) (signed char)57)));
            }
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
            {
                var_33 = ((/* implicit */_Bool) max((((3019940448655900222LL) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_7 + 1] [i_7] [i_7 + 2]))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)33)), (arr_22 [i_0] [i_0 - 1] [i_1 - 3]))))));
                var_34 = 636496001;
                var_35 |= ((/* implicit */signed char) (_Bool)1);
            }
            var_36 = 1ULL;
        }
    }
    var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 18418201498157494625ULL)))) <= (min(((-(var_4))), (((/* implicit */unsigned long long int) var_5))))));
}
