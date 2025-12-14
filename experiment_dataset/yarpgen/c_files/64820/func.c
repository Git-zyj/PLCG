/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64820
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
    for (signed char i_0 = 4; i_0 < 20; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_1]))));
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0 - 4] [i_1])) > (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            arr_10 [i_2] = var_10;
            arr_11 [i_0] [i_2] &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_5))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4512))))))));
            /* LoopSeq 3 */
            for (int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)14362))))) ? (((/* implicit */int) arr_8 [i_0 + 2])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) != (arr_5 [i_0] [i_2]))))));
                var_19 -= ((/* implicit */unsigned char) arr_13 [i_0] [i_2] [i_3]);
            }
            for (unsigned short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) var_15);
                var_21 = ((((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)24))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39000))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) arr_14 [i_5] [i_2] [i_5]);
                var_23 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [(unsigned char)8] [i_2] [i_2] [(unsigned char)8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0 + 2]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))) & (var_14)))));
                /* LoopNest 2 */
                for (signed char i_6 = 2; i_6 < 20; i_6 += 1) 
                {
                    for (signed char i_7 = 1; i_7 < 18; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [14LL] [i_6])) ? (((/* implicit */int) (unsigned short)4524)) : (((/* implicit */int) arr_13 [i_0 - 1] [7ULL] [i_6]))))) ? ((~(((/* implicit */int) (unsigned short)61004)))) : (arr_17 [i_0 - 1] [i_0 - 1] [i_5] [i_6 + 1])));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_5] [i_2]))) : (var_10))))))));
                        }
                    } 
                } 
                var_26 *= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [(unsigned char)12]))) + (arr_7 [(signed char)14] [(_Bool)1]))));
            }
            var_27 = ((/* implicit */_Bool) var_0);
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (var_9) : (((/* implicit */int) (unsigned short)51191))));
        }
        var_29 = ((/* implicit */unsigned long long int) var_16);
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 1; i_8 < 21; i_8 += 1) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    var_30 = ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)940)))) / (((/* implicit */int) (signed char)72)))) + (((/* implicit */int) arr_29 [(unsigned char)19] [i_8 + 1] [i_9]))));
                    var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((1710193251906633123ULL), (((/* implicit */unsigned long long int) (unsigned short)51148))))))) && (((/* implicit */_Bool) var_11))));
                    var_32 = ((/* implicit */signed char) ((max((arr_17 [i_9] [6] [6] [i_0]), (((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) ((((/* implicit */int) var_8)) != (((((/* implicit */int) var_15)) - (((/* implicit */int) arr_3 [i_8])))))))));
                    var_33 = ((/* implicit */_Bool) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_8] [i_9]))) % (arr_5 [i_8] [i_9]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_9])) ? (3232033652994671421LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) ? (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_0] [5])) : (((/* implicit */int) arr_21 [(signed char)19] [i_9])))), (((/* implicit */int) (!(arr_24 [i_0] [i_8] [i_9])))))) : ((((((-(((/* implicit */int) var_6)))) + (2147483647))) >> (((((((/* implicit */_Bool) 5526807107356425760ULL)) ? (1613305697) : (((/* implicit */int) (unsigned short)44247)))) - (1613305695)))))));
                }
            } 
        } 
        var_34 = (~(((/* implicit */int) var_15)));
    }
    var_35 &= ((/* implicit */signed char) ((((_Bool) min((var_10), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)43442)) : ((((_Bool)0) ? (-5) : (((/* implicit */int) (signed char)-1))))))) : (min((var_14), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_4)), (var_1))))))));
}
