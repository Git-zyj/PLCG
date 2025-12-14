/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69036
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
    var_20 = ((/* implicit */_Bool) var_1);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 4; i_0 < 7; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((short) arr_0 [i_0 - 4]))), (((((/* implicit */unsigned long long int) arr_3 [i_0 + 4] [i_0 + 3])) / (arr_1 [i_0 + 4]))))))));
        arr_4 [i_0] = arr_1 [i_0 + 3];
        var_22 = ((((_Bool) arr_1 [i_0 - 3])) ? (((max((var_12), (-8591926720996782509LL))) | (arr_3 [i_0] [i_0 + 3]))) : (((((/* implicit */_Bool) ((((var_4) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (1)))))) ? (arr_3 [i_0 + 2] [i_0]) : (min((((/* implicit */long long int) var_2)), (var_13))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned long long int) ((arr_3 [i_0 - 4] [i_0 + 1]) >> (((arr_5 [i_0] [i_0]) + (9154036154208913917LL)))))) : (((/* implicit */unsigned long long int) ((arr_3 [i_0 - 4] [i_0 + 1]) >> (((((arr_5 [i_0] [i_0]) + (9154036154208913917LL))) - (602410742216649308LL))))));
            var_23 &= ((/* implicit */_Bool) arr_3 [i_0 - 3] [i_0]);
        }
    }
    for (unsigned char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_24 = ((/* implicit */signed char) arr_9 [i_2]);
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 2) 
                {
                    var_25 *= ((/* implicit */short) 581944939);
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (arr_15 [i_2] [(signed char)4])));
                    var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) -8591926720996782509LL)) ? (8591926720996782529LL) : (((/* implicit */long long int) var_6)))) >= (-8591926720996782509LL)));
                }
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) var_6);
                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((unsigned char) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2])))));
            }
            /* LoopNest 2 */
            for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
            {
                for (short i_8 = 1; i_8 < 17; i_8 += 1) 
                {
                    {
                        arr_25 [i_8] [i_7] [i_7] [i_7] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_13 [(signed char)15] [i_7 - 1] [i_7] [i_8 - 1]), (arr_13 [i_2] [i_7 + 2] [i_7] [i_8 - 1])))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_7 - 1] [i_7] [i_8 - 1])) ? (((/* implicit */long long int) arr_11 [i_2] [i_7 + 2] [i_7])) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_7 + 2] [i_7] [i_8 + 2]))) >= (arr_11 [i_7 + 1] [i_7 + 2] [5LL])))))));
                        arr_26 [i_2] [i_7] [i_3] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_11 [i_2] [i_3] [i_2])))) ? (((/* implicit */int) (unsigned char)42)) : (((((/* implicit */int) arr_22 [8LL] [i_3] [i_7] [i_8])) - (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (signed char)74)))) : (((/* implicit */int) var_2)))) : (((((/* implicit */int) arr_19 [i_7 - 1] [i_7 + 2] [(_Bool)0] [i_3])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_2] [i_3] [i_7])) || (((/* implicit */_Bool) var_11)))))))));
                        var_30 = ((/* implicit */long long int) min((var_30), (((((/* implicit */long long int) ((/* implicit */int) var_17))) ^ (min((((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_7])) + (((/* implicit */int) arr_17 [i_2] [i_3] [i_7] [i_8 - 1]))))), (max((((/* implicit */long long int) arr_20 [i_2] [i_7] [i_7] [i_2])), (var_18)))))))));
                        arr_27 [9] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */long long int) arr_18 [i_2] [i_2] [i_8 + 1])) ^ (((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2]))) : (66060288LL)))));
                    }
                } 
            } 
        }
        var_31 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_2] [i_2] [i_2])))))) == (min((((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */long long int) var_15)) : (3410918096480632300LL))), (((/* implicit */long long int) var_10))))));
        arr_28 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_19 [i_2] [i_2] [i_2] [i_2]))));
        var_32 = ((/* implicit */short) min((((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2])) - (441777897))), (((/* implicit */int) ((((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2])) >= (((/* implicit */int) arr_14 [(unsigned char)16] [i_2] [i_2] [i_2])))))));
    }
    for (int i_9 = 1; i_9 < 8; i_9 += 1) 
    {
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) ((var_1) > (((/* implicit */long long int) var_6))))) % (arr_18 [i_9] [i_9] [i_9])))))))));
        var_34 += ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */long long int) var_14)) == (var_4)))) >> (((var_12) % (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_9] [i_9] [(signed char)2] [i_9]))))))) == (((((/* implicit */int) arr_20 [6U] [i_9 + 2] [i_9] [6U])) >> (((((/* implicit */int) arr_19 [i_9 - 1] [i_9 - 1] [(signed char)17] [i_9 + 1])) - (106)))))));
        var_35 = ((((/* implicit */int) var_2)) << (((/* implicit */int) ((((/* implicit */int) arr_17 [i_9 + 2] [i_9 - 1] [i_9 - 1] [i_9 - 1])) < (((/* implicit */int) var_3))))));
    }
    for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
    {
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 19; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_39 [i_12] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) * (((/* implicit */int) arr_13 [i_12] [(signed char)2] [(signed char)2] [i_10])))) << (((((/* implicit */int) arr_22 [i_10] [i_11] [(_Bool)0] [i_10])) - (200)))))) ? (((/* implicit */unsigned long long int) -8591926720996782509LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_34 [i_10]), (var_7))))) - ((+(arr_10 [i_10])))))));
                    var_36 = ((/* implicit */unsigned char) ((((((var_4) + (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_12] [i_12] [i_11] [i_10]))))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))) + (((((/* implicit */long long int) arr_23 [4ULL])) + (((((/* implicit */long long int) arr_12 [i_12])) + (arr_36 [i_11])))))));
                }
            } 
        } 
        arr_40 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) ((arr_35 [i_10] [1ULL] [i_10]) < (var_1)))), (var_8))))) <= (((arr_37 [i_10] [i_10] [i_10]) << (((min((var_13), (((/* implicit */long long int) var_7)))) - (19752LL)))))));
        var_37 = ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 33550336ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_18)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_17 [i_10] [i_10] [i_10] [i_10])))) : (((/* implicit */int) var_17)));
    }
    var_38 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((2795755573960674007LL) > (var_13))) ? (max((((/* implicit */long long int) var_9)), (-8591926720996782509LL))) : (((((/* implicit */_Bool) var_0)) ? (var_18) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? ((~(var_4))) : (558446353793941504LL)));
}
