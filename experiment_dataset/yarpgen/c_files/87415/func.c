/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87415
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
    var_17 -= ((/* implicit */unsigned int) ((var_5) - ((-(var_5)))));
    var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)53))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_20 = (-((~(((/* implicit */int) var_16)))));
        var_21 = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_1 [i_0])))))));
        var_22 = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned long long int) 561492168U);
            var_24 = ((/* implicit */signed char) var_1);
            var_25 ^= 10323515079938814074ULL;
        }
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) max(((unsigned short)23997), (((/* implicit */unsigned short) arr_2 [i_1 + 1] [i_1]))))), (4465720904912435351LL)))) ? ((((+(((/* implicit */int) (unsigned short)65535)))) - (((/* implicit */int) (signed char)-60)))) : (min((((/* implicit */int) arr_3 [i_1 + 1])), (((((/* implicit */int) arr_4 [i_1])) & (((/* implicit */int) arr_7 [i_1]))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            for (short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((long long int) max((arr_11 [i_1]), (((/* implicit */unsigned long long int) 1309213773)))))) == ((+(max((11046459581194917101ULL), (var_8)))))));
                    /* LoopSeq 3 */
                    for (int i_5 = 2; i_5 < 10; i_5 += 4) 
                    {
                        var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) max(((signed char)-88), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_5] [i_3 + 1] [i_3 + 1])) || (arr_8 [i_1] [i_1])))))))));
                        var_29 ^= ((/* implicit */short) (+(max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))), (max((((/* implicit */unsigned long long int) arr_3 [i_1])), (16705795306421442859ULL)))))));
                        var_30 ^= min((var_3), (((/* implicit */unsigned long long int) (-(((unsigned int) -6355457479282563498LL))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            var_31 *= ((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)32)) ? (((/* implicit */int) (signed char)-53)) : (arr_10 [i_1] [8] [i_1 + 1])))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))) & (11046459581194917101ULL)));
                            var_33 |= ((/* implicit */_Bool) 16705795306421442867ULL);
                        }
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(short)7] = ((/* implicit */int) 11046459581194917120ULL);
                            arr_23 [i_1] [i_3 - 1] [i_1] [i_1] [i_7] [i_3 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((11046459581194917083ULL), (((/* implicit */unsigned long long int) arr_7 [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (max((11046459581194917083ULL), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_3]))))))) ? ((~(arr_15 [i_7]))) : (var_4)));
                        }
                        for (unsigned short i_8 = 1; i_8 < 8; i_8 += 1) 
                        {
                            var_34 &= ((/* implicit */unsigned char) ((arr_9 [i_5] [i_5 - 2]) / (((/* implicit */unsigned int) (+(((/* implicit */int) ((16710392226782169272ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            var_35 += ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1] [i_3 + 1])))))));
                            var_36 = max((((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) var_16)))))), (var_5));
                        }
                    }
                    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            var_37 = ((/* implicit */long long int) max((var_37), ((+(max((max((((/* implicit */long long int) var_14)), (var_15))), (((/* implicit */long long int) -2014122143))))))));
                            arr_32 [i_1] [i_3] [i_4] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) (signed char)-69))))))));
                        }
                        var_38 = ((/* implicit */unsigned short) 2014122147);
                    }
                    for (long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        var_39 = ((/* implicit */unsigned char) (-(((arr_5 [i_1] [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11)))))));
                        var_40 += ((/* implicit */signed char) max(((-(((/* implicit */int) arr_2 [i_3] [i_3])))), (((/* implicit */int) var_14))));
                    }
                }
            } 
        } 
        arr_36 [i_1] = max(((((-(var_15))) / (((/* implicit */long long int) max((arr_9 [i_1] [i_1]), (((/* implicit */unsigned int) var_7))))))), (((/* implicit */long long int) max((((/* implicit */signed char) arr_3 [i_1])), (arr_4 [i_1 + 1])))));
    }
    var_41 = (signed char)62;
}
