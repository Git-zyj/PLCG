/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97653
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
    var_19 = ((/* implicit */int) var_14);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)40)) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) var_9))));
                    /* LoopSeq 4 */
                    for (long long int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        var_21 = var_7;
                        arr_11 [i_0] [i_0] = ((((/* implicit */int) var_1)) ^ (arr_9 [i_3] [i_3] [i_3 + 1] [i_3 - 1]));
                    }
                    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                    {
                        arr_14 [i_0] = ((/* implicit */unsigned int) (+(arr_4 [i_0] [i_0])));
                        arr_15 [i_1] [(signed char)6] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(arr_9 [(unsigned char)11] [i_1] [i_1] [i_4]))))));
                        arr_16 [i_0] [i_1] [i_0] [i_2] [i_2] [i_0] = -136787213;
                    }
                    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        arr_20 [13LL] [5LL] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)1))));
                        /* LoopSeq 3 */
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 1) /* same iter space */
                        {
                            var_22 = (!(((/* implicit */_Bool) arr_19 [i_0])));
                            var_23 = ((/* implicit */unsigned char) var_12);
                            var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) /* same iter space */
                        {
                            arr_25 [i_0] [i_1] [i_0] [5U] [i_7] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)151))));
                            var_25 = ((/* implicit */unsigned char) var_9);
                        }
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_8] [i_0] [(unsigned char)1] [i_0] [(unsigned char)1])) ? (arr_12 [i_0] [i_5] [13U] [i_0]) : (arr_12 [i_0] [i_1] [13ULL] [i_0])));
                            var_27 = ((/* implicit */long long int) arr_10 [i_2] [i_5] [i_8]);
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)151))) < (-4529905243003158074LL))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((_Bool) (!((_Bool)1))));
                            arr_34 [i_0] [i_0] [i_1] [i_0] [6LL] [i_9] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)7))));
                            arr_35 [(signed char)12] [(signed char)12] [i_1] [i_0] [i_2] [i_5] [(signed char)12] = ((/* implicit */unsigned int) (unsigned char)148);
                            var_30 = ((/* implicit */unsigned short) (!(var_7)));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_40 [9U] [i_0] [i_2] [1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) -4529905243003158092LL)) % (7059182537950023838ULL)));
                            var_31 = (!(((/* implicit */_Bool) arr_2 [(unsigned short)8])));
                        }
                    }
                    for (int i_11 = 0; i_11 < 14; i_11 += 1) 
                    {
                        arr_44 [i_0] [i_1] [i_1] [i_2] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                        arr_45 [i_0] [i_2] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7946033209598151085ULL)) ? ((+(((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) (unsigned char)216))));
                        arr_46 [(_Bool)1] [10U] [i_2] [i_0] [3] [(unsigned short)5] = ((/* implicit */int) arr_39 [i_11] [i_0] [i_1] [i_0] [i_0]);
                    }
                    arr_47 [13] [i_1] [i_0] = arr_1 [i_0];
                }
            } 
        } 
        var_32 = ((/* implicit */unsigned char) ((long long int) arr_38 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    for (long long int i_12 = 0; i_12 < 14; i_12 += 1) /* same iter space */
    {
        arr_50 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_15)) + (6708)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)30))))) : (((arr_1 [i_12]) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)46))))));
        var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned char)40))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))));
        var_34 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -7970044664223577512LL))))), (((unsigned char) 11387561535759527776ULL))));
        arr_51 [i_12] [i_12] = (+(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)55)) && (arr_33 [(unsigned char)4] [i_12] [(unsigned char)12] [i_12] [i_12] [i_12] [i_12])))), (min((1016469596U), (((/* implicit */unsigned int) (unsigned char)94)))))));
    }
    var_35 = ((/* implicit */long long int) min((1411086010), (((/* implicit */int) (!(((var_6) == (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (2864174051U)))), (13093511982941720516ULL)))) ? (((/* implicit */int) (short)31)) : (((/* implicit */int) (unsigned char)122))));
}
