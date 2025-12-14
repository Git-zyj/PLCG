/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99945
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
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        var_12 = ((/* implicit */_Bool) ((signed char) ((long long int) ((unsigned long long int) (signed char)117))));
                        var_13 = ((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) % (((((/* implicit */_Bool) var_4)) ? (arr_2 [i_0] [i_0] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) var_9)) % (((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_3] [i_4]))) : (var_10)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_4]))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_2] [i_2] [i_1]))) : (var_4))))) : (((long long int) 16571201472534348192ULL))));
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_6))) ? (((/* implicit */int) ((unsigned char) var_9))) : (((((/* implicit */int) var_2)) / (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) ((signed char) (-9223372036854775807LL - 1LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_0)))) : (((unsigned long long int) arr_3 [i_0] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) var_4))));
                            var_16 = ((((_Bool) ((unsigned long long int) (-9223372036854775807LL - 1LL)))) || (((/* implicit */_Bool) arr_11 [13ULL] [i_1] [i_0] [i_1])));
                        }
                        arr_14 [i_0] [11ULL] [i_0] = ((/* implicit */_Bool) arr_9 [i_0]);
                        var_17 = ((/* implicit */_Bool) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65387))) ^ (11266389479184265763ULL))) + (((/* implicit */unsigned long long int) ((long long int) arr_13 [i_0] [i_0] [i_2] [i_3] [i_3]))))) << (((/* implicit */int) ((((((/* implicit */_Bool) -6062897939010523833LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)106))) : (arr_3 [i_0] [i_0] [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0] [i_1])))))))))));
                    }
                    for (short i_5 = 1; i_5 < 19; i_5 += 2) 
                    {
                        arr_17 [i_0] [i_1] [i_0] = (i_0 % 2 == zero) ? (((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) arr_9 [i_0]))))) >> (((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_5]))) - (var_11))) - (8475644854051402417LL)))))) : (((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_0])) || (((/* implicit */_Bool) arr_9 [i_0]))))) >> (((((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_5]))) - (var_11))) - (8475644854051402417LL))) + (49LL))))));
                        var_18 = ((/* implicit */long long int) min((var_18), (var_4)));
                    }
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        for (short i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_19 = arr_13 [i_7] [i_0] [i_2] [i_0] [i_0];
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 11939531798966479522ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8508820863539099172ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_5)))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_11)))))))))));
                                var_21 = ((/* implicit */signed char) ((unsigned char) ((unsigned long long int) ((unsigned char) (unsigned short)49141))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        for (signed char i_9 = 3; i_9 < 22; i_9 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8 + 1] [i_9]))) & (arr_24 [i_9]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [14])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_25 [i_9 - 3]))))))));
                var_23 = ((/* implicit */long long int) ((arr_25 [i_8]) && (((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) var_3))))));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25; i_10 += 2) 
                {
                    for (long long int i_11 = 1; i_11 < 24; i_11 += 2) 
                    {
                        {
                            arr_34 [i_8] [7ULL] [i_8] [i_10] = arr_29 [i_8] [i_9 - 1];
                            /* LoopSeq 1 */
                            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                            {
                                arr_37 [i_8] [i_11] [i_8] = ((/* implicit */long long int) ((unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_30 [i_8] [9LL] [i_8])) ? (arr_24 [i_8]) : (arr_29 [i_8] [i_8])))));
                                arr_38 [i_8] [i_9 - 2] [i_9] [i_11] = ((/* implicit */_Bool) ((int) ((int) ((arr_33 [i_8] [i_8] [i_10] [i_11] [i_12]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
                            }
                            arr_39 [i_8] [i_9] [i_10] [i_8] [i_11] = ((/* implicit */int) ((unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) == (arr_29 [i_8] [i_11 + 1])))));
                        }
                    } 
                } 
                arr_40 [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((((((((/* implicit */int) var_2)) != (((/* implicit */int) arr_27 [9LL] [9LL])))) ? (((long long int) 11620586669921064470ULL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_1)))))))) + (9223372036854775807LL))) >> (((((((_Bool) 3207218727572689471LL)) ? (((var_11) + (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((var_5) ? (arr_35 [i_8]) : (((/* implicit */int) var_2))))))) + (8475644854051402360LL)))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((unsigned char) var_0)))) >= (((/* implicit */int) var_6)))))));
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_10))));
    var_26 = ((/* implicit */signed char) var_7);
}
