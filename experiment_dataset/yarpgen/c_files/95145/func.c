/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95145
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((max((694964775543657619ULL), (arr_1 [i_0 - 1]))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))))));
                arr_5 [i_1] = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (694964775543657619ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((((/* implicit */_Bool) ((2601210244993069714ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1]))) : (arr_1 [i_0])))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_21 ^= ((/* implicit */_Bool) (unsigned short)19);
                        var_22 = ((/* implicit */_Bool) ((arr_1 [i_1]) + (arr_1 [i_1])));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 2; i_4 < 8; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                arr_18 [(_Bool)1] [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_17 [i_0] [(_Bool)1] [i_2] [i_2] [i_4 + 1] [i_4] [i_5])) % (((/* implicit */int) arr_12 [i_4] [i_1] [i_2] [i_1] [i_1])))), (((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) < (((/* implicit */int) var_6)))))));
                                arr_19 [i_4] [i_2] [(_Bool)1] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_4 - 2] [i_4 + 3] [(_Bool)0] [i_4 - 2]))))), (max((((/* implicit */unsigned long long int) arr_9 [i_2 + 1] [0ULL])), (((((/* implicit */_Bool) var_2)) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 1])))))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_2 + 1])), (((arr_13 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 - 1]))) : (33550336ULL)))));
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_23 = ((/* implicit */_Bool) ((arr_6 [i_6] [i_1] [i_0]) + (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)29508)))) - (((/* implicit */int) (_Bool)1)))))));
                        arr_24 [i_0] [i_0] [i_1] [i_6] = ((unsigned char) ((_Bool) arr_15 [i_0 + 1] [i_1] [(_Bool)1]));
                    }
                }
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (unsigned short i_8 = 3; i_8 < 8; i_8 += 3) 
                    {
                        {
                            arr_32 [(unsigned short)8] [i_1] [(unsigned short)2] [i_7] [i_8 + 1] |= ((/* implicit */_Bool) (-(min((((/* implicit */int) var_3)), ((-(((/* implicit */int) arr_8 [(_Bool)1] [i_1] [i_1] [i_8]))))))));
                            var_24 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (_Bool)0)))), ((+(((/* implicit */int) (unsigned char)8))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) min(((unsigned char)0), (var_3)))), (4989454985045977620ULL))), (((/* implicit */unsigned long long int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            {
                var_26 = ((/* implicit */_Bool) (+((~((((_Bool)1) ? (((/* implicit */int) arr_33 [i_9 - 1] [i_10 + 1])) : (((/* implicit */int) var_14))))))));
                arr_38 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_33 [i_9 - 1] [i_10 + 1])), (arr_37 [i_9 - 1] [i_10])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) (unsigned short)47495)), (((arr_35 [i_10] [i_9]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))))));
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_10] [i_10 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (arr_37 [i_9] [i_10]))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)72))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) 4989454985045977620ULL);
    /* LoopNest 3 */
    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
    {
        for (unsigned long long int i_12 = 1; i_12 < 12; i_12 += 2) 
        {
            for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                {
                    arr_47 [i_11] [i_12] [i_13] = ((/* implicit */unsigned short) var_16);
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (~(((((arr_44 [i_11 + 1] [i_12] [i_13]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_11 + 1]))))))))));
                    arr_48 [i_11] [i_13] [i_13] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) arr_36 [i_11 + 1] [(_Bool)1])))) : ((-(((((/* implicit */_Bool) (unsigned short)30601)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_46 [(unsigned short)5] [i_11] [i_11]))))))));
                    var_30 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_46 [i_12 + 1] [i_12 - 1] [i_12 - 1])) ^ (((((/* implicit */_Bool) (unsigned char)69)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (_Bool)0))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)53736)) >> (((((/* implicit */int) (unsigned char)65)) - (61)))))), ((((_Bool)1) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)10378))))))) : (((((/* implicit */_Bool) max(((unsigned short)57283), ((unsigned short)53736)))) ? (16715522362280912783ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12260)))))));
                    arr_49 [i_11 + 1] [i_11] = ((/* implicit */_Bool) (unsigned short)8252);
                }
            } 
        } 
    } 
}
