/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83451
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_11 = ((short) ((((/* implicit */int) (short)1029)) >> (((((/* implicit */int) (short)-20)) + (39)))));
        arr_3 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [(signed char)0] [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (16909454802901168660ULL))) : (3270822984313746313ULL))), (1537289270808382968ULL)));
        var_12 = min((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */_Bool) ((unsigned long long int) arr_0 [i_0] [i_0]))) ? (((/* implicit */int) min((arr_2 [i_0] [i_0]), (arr_2 [(_Bool)1] [i_0])))) : ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_3] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 1537289270808382955ULL)))) + (((((/* implicit */_Bool) 1537289270808382937ULL)) ? (1537289270808382982ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12694)))))));
                        arr_14 [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned int) (((~(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [4ULL])))) ^ (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_1]))))))), (((unsigned int) arr_10 [i_3] [i_2] [i_1] [i_0]))));
                        /* LoopSeq 4 */
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            arr_18 [i_4] [i_4] [i_2] [i_2] = ((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [i_4]);
                            var_13 = ((/* implicit */short) min((16909454802901168645ULL), (((/* implicit */unsigned long long int) (short)12698))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            arr_23 [i_5] [(short)1] [i_2] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_8 [(short)10] [(short)15] [i_0])) : (((/* implicit */int) (_Bool)0))))));
                            var_14 += ((short) (signed char)107);
                            arr_24 [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            arr_25 [i_1] [(short)4] = ((/* implicit */unsigned int) arr_21 [i_0] [i_1] [i_2] [i_3] [i_3] [i_5]);
                        }
                        for (short i_6 = 3; i_6 < 15; i_6 += 1) 
                        {
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1537289270808382988ULL)) ? (15651092892168422001ULL) : (((/* implicit */unsigned long long int) -119161576824961012LL)))))))));
                            var_15 = ((/* implicit */short) min(((-(((/* implicit */int) ((short) -119161576824961012LL))))), (((/* implicit */int) arr_21 [i_3] [i_3] [i_3] [i_3] [(short)6] [i_3]))));
                        }
                        for (unsigned short i_7 = 2; i_7 < 16; i_7 += 1) 
                        {
                            var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) 17321075734913374047ULL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) arr_17 [i_7 + 1] [i_7 - 2] [i_7 + 1] [i_0] [i_7 + 1] [i_7 - 2] [i_7 - 1])) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */int) arr_31 [i_7] [i_1])) : (((/* implicit */int) (signed char)76))))))) : (((long long int) 9223372036854775807LL))));
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) max((8863965675096378182ULL), (((/* implicit */unsigned long long int) (short)12714))));
                        }
                    }
                    arr_33 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) ((unsigned char) (-(((/* implicit */int) (short)12694)))));
                }
            } 
        } 
    }
    var_17 = ((/* implicit */short) var_8);
}
