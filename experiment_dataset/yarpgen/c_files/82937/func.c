/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82937
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
    var_10 |= ((/* implicit */long long int) var_7);
    var_11 = (((!(((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)29)), (-1710749468334585968LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) var_9)))), (((((/* implicit */int) var_6)) <= (((/* implicit */int) var_2)))))))) : (((unsigned int) var_3)));
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) (+(1710749468334585966LL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_7)) <= (((/* implicit */int) ((unsigned char) arr_4 [i_0])))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                arr_10 [i_0] [i_0 + 1] [i_0] = ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) / (arr_9 [(signed char)13] [i_2])));
            }
            for (signed char i_3 = 0; i_3 < 21; i_3 += 2) 
            {
                var_13 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) & (-1710749468334585970LL)));
                arr_15 [i_3] |= ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_0] [i_0] [i_1] [i_3]))))) ^ (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_0]))) : (var_0)))));
            }
        }
        /* vectorizable */
        for (unsigned short i_4 = 2; i_4 < 20; i_4 += 4) 
        {
            var_14 ^= ((/* implicit */short) ((unsigned long long int) arr_12 [i_0 - 1] [i_0 + 1] [i_0] [i_0]));
            arr_20 [i_0] [i_0] = var_1;
        }
    }
    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 1) 
    {
        arr_23 [i_5] [17U] = ((/* implicit */unsigned int) var_2);
        var_15 -= ((/* implicit */_Bool) var_9);
        arr_24 [i_5 - 1] = ((/* implicit */unsigned char) (+((-(min((var_1), (((/* implicit */unsigned int) arr_19 [i_5]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 1; i_6 < 15; i_6 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_7 = 0; i_7 < 19; i_7 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (short)5856)))));
            arr_33 [17LL] [i_6] [17LL] = ((/* implicit */long long int) var_3);
            arr_34 [i_6] [i_6] = var_1;
        }
        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
        {
            var_17 -= ((/* implicit */short) arr_18 [(signed char)2] [i_6 - 1] [i_6 + 4]);
            arr_37 [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) arr_29 [i_8] [i_8])) ? ((-(-8905535331569445441LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)10181))));
            var_18 += ((/* implicit */short) 18014398509481983ULL);
            var_19 = ((/* implicit */long long int) arr_16 [i_6] [i_6 + 1]);
            /* LoopSeq 2 */
            for (int i_9 = 0; i_9 < 19; i_9 += 4) 
            {
                var_20 -= ((/* implicit */short) ((arr_11 [i_6]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
                var_21 = ((/* implicit */unsigned char) var_0);
                var_22 = ((/* implicit */unsigned long long int) -8905535331569445441LL);
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                {
                    for (unsigned int i_11 = 1; i_11 < 16; i_11 += 1) 
                    {
                        {
                            var_23 += ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_10 + 1] [i_6 + 3] [i_11 + 2]))));
                            var_24 += ((/* implicit */signed char) ((arr_39 [i_6] [i_6 + 1] [i_10 + 1] [i_6 + 3]) / (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                        }
                    } 
                } 
            }
            for (long long int i_12 = 3; i_12 < 18; i_12 += 3) 
            {
                arr_47 [i_6] [i_6] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_30 [6U] [i_8] [i_12])) - (((/* implicit */int) (unsigned char)18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_41 [i_6] [i_6 - 1] [i_6 - 1] [i_6 - 1])));
            }
        }
        var_26 |= ((/* implicit */int) ((unsigned short) var_6));
        var_27 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(-1710749468334585968LL))))));
        var_28 = ((/* implicit */unsigned int) arr_3 [i_6] [18] [15ULL]);
        arr_48 [i_6] = ((/* implicit */signed char) arr_31 [i_6 + 4] [9ULL] [i_6 + 3]);
    }
}
