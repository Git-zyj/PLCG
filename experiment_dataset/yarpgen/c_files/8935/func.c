/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8935
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            arr_7 [i_0] [(unsigned short)13] = ((/* implicit */int) (+(arr_2 [i_0])));
            arr_8 [i_1] [i_1] [i_1] = (signed char)-117;
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            arr_12 [2U] = ((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0]);
            var_14 = ((/* implicit */unsigned char) ((int) arr_9 [i_2] [(unsigned char)2] [i_2]));
            arr_13 [i_0] [i_2] [(unsigned char)15] = ((/* implicit */unsigned char) ((int) arr_4 [i_0] [i_0]));
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_15 = ((((/* implicit */_Bool) ((signed char) arr_0 [i_0]))) ? ((((-2147483647 - 1)) + (((/* implicit */int) arr_3 [12] [i_3])))) : (((((/* implicit */int) arr_3 [(unsigned short)6] [i_3])) % (((/* implicit */int) arr_0 [i_3])))));
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_15 [i_0] [i_3] [i_3]);
        }
        arr_17 [(unsigned char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-2147483647 - 1))) && (((/* implicit */_Bool) 2065239377))));
        arr_18 [i_0] = (~((-2147483647 - 1)));
    }
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 4) 
    {
        var_16 = ((/* implicit */_Bool) (~(((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4])) && (((/* implicit */_Bool) arr_10 [i_4]))))) >> (((((((((/* implicit */int) (signed char)-1)) + (2147483647))) << (((2147483647) - (2147483647))))) - (2147483638)))))));
        arr_22 [(signed char)10] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)34)) << (((((/* implicit */int) (unsigned short)15557)) - (15553)))))) : (18446744073709551609ULL)))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5])) ? ((-(((/* implicit */int) arr_0 [i_5])))) : (((/* implicit */int) max(((unsigned short)58557), (((/* implicit */unsigned short) arr_6 [i_5] [i_5] [i_5])))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) arr_4 [i_5] [i_6]);
            var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) (~((((-2147483647 - 1)) & (((/* implicit */int) (unsigned char)13))))))), (((((/* implicit */_Bool) (unsigned short)65524)) ? (((/* implicit */unsigned int) 2147483647)) : (var_1)))));
            arr_27 [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_6] [i_5]))));
        }
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_20 = (unsigned short)65535;
            /* LoopSeq 3 */
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                var_21 = arr_20 [i_7] [i_7];
                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_11 [i_7] [8] [i_7]))));
                var_23 |= ((/* implicit */int) ((signed char) (unsigned short)65524));
            }
            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
            {
                arr_35 [i_9] [i_9] = var_9;
                /* LoopNest 2 */
                for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    for (int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((((/* implicit */int) arr_25 [i_7] [i_7])) + (2147483647))) << (((3431988097U) - (3431988097U)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))) : (((((/* implicit */_Bool) arr_21 [i_10])) ? (((/* implicit */int) (unsigned char)3)) : (2147483647))))) % (max((((/* implicit */int) max((((/* implicit */unsigned short) arr_15 [i_5] [i_5] [i_5])), ((unsigned short)59760)))), (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned short)65524)) : (var_11))))))))));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_10] [i_9])) / (((/* implicit */int) arr_4 [i_5] [i_9]))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_11])) ? ((-2147483647 - 1)) : (((/* implicit */int) (unsigned short)4))))) / (max((16395436525575405995ULL), (((/* implicit */unsigned long long int) (unsigned short)4)))))))))));
                            var_26 = ((((((/* implicit */int) max(((unsigned char)255), ((unsigned char)133)))) == ((-(((/* implicit */int) (signed char)127)))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_1 [i_9])) : (((/* implicit */int) arr_1 [i_7])))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) arr_37 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_31 [i_7]))))))))));
            }
            for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned short) ((int) arr_37 [i_5] [i_7] [(signed char)10]));
                var_29 = ((/* implicit */int) ((unsigned char) (-(arr_34 [i_5] [i_5] [i_7] [(signed char)6]))));
            }
        }
        arr_44 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)-15))));
        var_30 = ((/* implicit */signed char) (-(((((/* implicit */int) (unsigned char)13)) >> (((max((((/* implicit */unsigned long long int) arr_5 [i_5] [i_5] [i_5])), (14146268038150142520ULL))) - (14146268038150142520ULL)))))));
    }
    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12))));
}
