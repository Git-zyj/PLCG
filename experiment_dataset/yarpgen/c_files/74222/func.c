/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74222
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
    var_14 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3840)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((short) (unsigned short)3834)))))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)3853))) ^ (-3699287875342314099LL)))));
    var_15 = ((/* implicit */unsigned char) max((min((2541853789849780168LL), (-3699287875342314099LL))), (((/* implicit */long long int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 |= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)255)) ? (826496140925322120LL) : (((/* implicit */long long int) 536870912U))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (16383548553218217398ULL))));
                            var_17 = ((/* implicit */short) max((((((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2] [(unsigned char)11]))))) ? (((/* implicit */int) ((unsigned char) 9223372036854775807LL))) : (((/* implicit */int) var_1)))), (var_11)));
                            var_18 *= ((/* implicit */_Bool) (-(((/* implicit */int) max((((short) -2541853789849780169LL)), (((/* implicit */short) max(((unsigned char)250), ((unsigned char)111)))))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) -3699287875342314100LL)), (17239390824283364776ULL)));
                arr_11 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (((unsigned int) (short)-2549))));
                /* LoopSeq 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_20 [(_Bool)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_0] [(_Bool)1] [i_0])) ? (((/* implicit */unsigned long long int) -826496140925322105LL)) : ((+(((((/* implicit */_Bool) (unsigned char)113)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)106)))))))));
                                arr_21 [(unsigned short)9] [5LL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (unsigned char)106))) ? (((((/* implicit */_Bool) (short)-5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136))) : (-3699287875342314077LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) 826496140925322101LL))))))) ? (((/* implicit */int) max((arr_1 [i_0] [i_0]), (((_Bool) (unsigned short)18944))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_4] [i_5] [8LL])))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) 826496140925322101LL)) ? (((/* implicit */int) (short)-5)) : (((/* implicit */int) (signed char)-14)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 12; i_8 += 2) 
                        {
                            {
                                arr_27 [i_1] [i_1] [i_4] [i_4] [i_8 + 2] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_10))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_9)), (var_12))))))) < (((/* implicit */long long int) ((/* implicit */int) ((short) arr_18 [i_7 + 4] [i_8] [i_0] [i_8] [i_8 + 1]))))));
                                arr_28 [i_4] [i_1] [i_0] [i_4] = ((/* implicit */_Bool) 826496140925322134LL);
                                arr_29 [i_8] [i_0] [(unsigned char)12] [i_8] [i_7 + 4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_19 [i_0] [i_0] [i_7 + 1] [i_8 + 2] [i_8]))) ^ (((/* implicit */int) ((((/* implicit */int) arr_3 [i_8 + 2] [i_0])) == (((/* implicit */int) arr_7 [i_0] [i_8 + 2] [i_4])))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */signed char) max(((unsigned char)160), (((/* implicit */unsigned char) (_Bool)0))));
                }
                for (unsigned long long int i_9 = 3; i_9 < 13; i_9 += 3) 
                {
                    arr_33 [(unsigned short)6] [(unsigned short)6] [i_9] |= ((unsigned char) (+(((/* implicit */int) (signed char)29))));
                    var_22 = ((/* implicit */unsigned int) arr_12 [i_0]);
                    var_23 = ((/* implicit */unsigned long long int) ((1814183183U) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) arr_17 [i_9 - 3] [i_9] [i_9 - 1] [i_9] [i_9 - 1])))))));
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 11; i_10 += 4) 
                    {
                        for (int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            {
                                var_24 = ((unsigned short) arr_22 [i_9 + 1] [i_0] [i_10] [i_10 + 1]);
                                arr_39 [i_0] [i_10] [i_9] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(unsigned short)5])) ? (var_13) : (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_34 [(_Bool)1] [(signed char)0]))) ? (((/* implicit */int) min((arr_32 [i_1] [i_0]), (((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (max((arr_35 [i_0] [i_1] [i_9] [i_9 - 3] [i_1] [i_1]), (((/* implicit */int) arr_32 [i_0] [i_0]))))))) : (((((/* implicit */_Bool) -5630164660959209908LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-826496140925322101LL)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
