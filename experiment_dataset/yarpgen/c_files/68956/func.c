/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68956
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_7 [(unsigned char)12] [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_14)))) ? (min((((/* implicit */unsigned long long int) arr_1 [15] [i_1])), (arr_4 [(unsigned short)9] [i_1] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (-2062954118) : (((/* implicit */int) var_6))))))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_16 &= ((/* implicit */_Bool) (unsigned short)51961);
                    var_17 = ((/* implicit */unsigned int) ((max((((12268934117451868316ULL) - (((/* implicit */unsigned long long int) arr_6 [i_2] [i_1] [i_0])))), (((/* implicit */unsigned long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) > (((/* implicit */unsigned long long int) min((((unsigned int) arr_5 [i_1])), (((/* implicit */unsigned int) var_2)))))));
                    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_5 [i_0])), (((5457414645253536247ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_10 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) (-(4194303ULL)));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    var_19 = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((var_11) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) > (((/* implicit */int) var_6))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 3; i_4 < 13; i_4 += 4) 
                    {
                        arr_15 [i_0] [i_1] [i_0] [i_1] [i_3] = ((/* implicit */unsigned int) var_7);
                        arr_16 [i_0] [i_1] [7LL] [i_3] [i_1] [(unsigned char)7] = ((/* implicit */long long int) arr_8 [i_0] [i_1]);
                        var_20 = ((var_1) ^ (((/* implicit */int) var_10)));
                    }
                    for (unsigned long long int i_5 = 4; i_5 < 13; i_5 += 2) 
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_1)) * (arr_3 [i_5 + 1])))) ? (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) arr_3 [i_5 + 3]))))) : (((12989329428456015372ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))));
                        var_21 = ((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 1] [i_0] [(unsigned short)4] [i_0] [i_0])) ? (((/* implicit */long long int) max((16777214U), (((/* implicit */unsigned int) arr_5 [i_5]))))) : (var_15));
                        arr_20 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = (~(2649694834U));
                    }
                    var_22 |= ((/* implicit */unsigned long long int) -6854542581359103860LL);
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_6 [i_1 + 2] [i_1 - 1] [i_1])) <= (min((2179863125023073898ULL), (((/* implicit */unsigned long long int) var_5))))))), (((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_1] [i_3])) ? (var_14) : (((/* implicit */long long int) 2147483647)))) << (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0]))) > (arr_17 [i_3] [i_3] [i_3] [i_3] [0LL] [i_3])))) - (1))))))))));
                    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((unsigned int) var_3)))))));
                }
                for (int i_6 = 3; i_6 < 14; i_6 += 1) 
                {
                    var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) -1829873015))));
                    var_26 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) 269063764)) ? (((/* implicit */int) (unsigned short)34459)) : (((/* implicit */int) (_Bool)1))))));
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            arr_29 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_7] [i_0]))))) ? (((/* implicit */unsigned int) min((var_0), (136588773)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_3 [i_7])))))) & (arr_28 [i_0] [7ULL] [i_7] [i_8] [i_8 + 1])));
                            var_27 = ((/* implicit */unsigned int) var_13);
                            arr_30 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)13)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (max((arr_18 [i_0] [i_0] [14LL] [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_13)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 4) 
    {
        var_28 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)230)) ? (486288632) : (-981527541)))), (arr_31 [i_9] [i_9])));
        var_29 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2147483647)) ^ (2589469852232247757ULL)));
        arr_33 [i_9] [i_9] = ((/* implicit */signed char) var_0);
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 20; i_10 += 3) 
        {
            for (long long int i_11 = 1; i_11 < 18; i_11 += 4) 
            {
                {
                    arr_40 [i_9] [i_9] [i_11 - 1] = ((((/* implicit */_Bool) max((18446744073709551607ULL), (((/* implicit */unsigned long long int) arr_34 [i_11 + 1] [i_11 + 1] [i_11 + 1]))))) && ((!(((/* implicit */_Bool) arr_38 [i_11 + 2] [i_11 + 2] [i_11 - 1])))));
                    var_30 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */_Bool) max((6854542581359103860LL), (((/* implicit */long long int) 2147483647))))) && (((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [14ULL] [i_10] [i_11]))))))))));
                    var_31 |= ((/* implicit */unsigned int) min((((((int) var_12)) >> (((/* implicit */int) var_4)))), (((/* implicit */int) var_6))));
                }
            } 
        } 
        var_32 += ((/* implicit */unsigned long long int) ((((arr_32 [i_9] [i_9]) ? (((/* implicit */int) ((arr_37 [i_9] [i_9] [i_9]) <= (arr_37 [i_9] [i_9] [i_9])))) : (((((/* implicit */int) var_9)) << (((var_7) - (665684037))))))) <= (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) -1)), (-5867802858730185734LL)))) && (((/* implicit */_Bool) 15U)))))));
    }
    for (int i_12 = 0; i_12 < 25; i_12 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            for (long long int i_14 = 0; i_14 < 25; i_14 += 1) 
            {
                {
                    var_33 += ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_44 [i_12] [i_13] [i_14])) ? (arr_44 [i_12] [i_13] [i_14]) : (((/* implicit */int) (unsigned short)9934))))));
                    var_34 = ((/* implicit */unsigned long long int) (((((~(var_7))) <= ((-(((/* implicit */int) arr_48 [i_13] [i_13])))))) ? (((arr_41 [(unsigned short)12]) | ((-(((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (unsigned char)7))));
                    arr_49 [i_13] = ((/* implicit */int) (-(((1606423725U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98)))))));
                }
            } 
        } 
        arr_50 [i_12] = ((/* implicit */_Bool) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((unsigned char)142), (((/* implicit */unsigned char) arr_45 [i_12] [i_12]))))) || (((/* implicit */_Bool) max((var_15), (((/* implicit */long long int) 268435455)))))))), (var_2)));
        arr_51 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_1)) : (((((/* implicit */_Bool) (unsigned short)9709)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)38943))) : (2615393489U)))));
    }
    var_35 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (var_14)))))));
}
