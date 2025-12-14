/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8964
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
    for (int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 3; i_2 < 19; i_2 += 4) 
            {
                {
                    var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)55787)) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_2]))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        arr_10 [i_2] [4LL] [i_0] [i_2] = ((/* implicit */signed char) arr_7 [i_2] [i_1] [i_3]);
                        /* LoopSeq 3 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_2 + 1] [i_2] = ((unsigned int) arr_12 [i_2] [i_1] [i_2] [i_1] [i_1]);
                            arr_14 [i_2] [7] [i_2] [7] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2])) ? (((long long int) (-(((/* implicit */int) (short)29740))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_3] [i_3 - 1])) ? (((/* implicit */int) arr_8 [i_2] [i_3] [i_2] [i_2] [i_1] [i_0])) : (1048575))))))));
                            arr_15 [12] [i_2 - 2] [10LL] [i_3] [i_4] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_2] [i_1]))) == ((~(4216966897U))))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_19 -= ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) (short)22015)))));
                            var_20 -= ((/* implicit */long long int) (~((+(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_1] [8LL] [i_5]))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)5325)) ? (((((/* implicit */_Bool) 535719186)) ? (arr_12 [i_2] [i_2] [i_1] [i_2] [i_5]) : (((/* implicit */int) (short)-20720)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 8012306082406536877ULL)))))));
                        }
                        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_0] [(short)7] [i_2] = ((/* implicit */int) 33554432U);
                            var_22 = ((((/* implicit */int) (short)29742)) / (((/* implicit */int) (short)31731)));
                            arr_23 [i_2] [i_6] [0LL] [i_3 - 1] [i_6] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -1784955114)) ? (((((/* implicit */_Bool) ((int) (unsigned char)3))) ? (3715388430U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_1] [i_2 + 1] [(short)0] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)9772))))))) : (((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) (unsigned short)41488)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9754))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1240910711)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) arr_0 [i_0])))))))));
                            arr_24 [i_6] [i_6] [i_6] [i_6] [i_2] [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) (unsigned char)180))))))) ? ((~(((/* implicit */int) arr_9 [i_3] [i_3 - 1] [i_3] [i_2])))) : ((-(-1906697653)))));
                        }
                        arr_25 [i_0] [(short)7] [i_2 + 2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (short)29740)) << (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29742))) & (3129941541U)))) ? (((/* implicit */long long int) 0)) : (((((/* implicit */_Bool) (short)17463)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31444))) : (2632407284144871002LL)))))));
                        var_23 = arr_18 [i_3 - 1] [i_2] [i_1] [i_0] [i_0];
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */int) var_12);
    var_25 -= ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (3705463689U)))) ? (((12540707359895131634ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)53923)) <= (((/* implicit */int) (short)22000)))))))));
    /* LoopSeq 1 */
    for (long long int i_7 = 1; i_7 < 24; i_7 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_8 = 2; i_8 < 24; i_8 += 1) 
        {
            var_26 -= ((/* implicit */short) var_6);
            /* LoopNest 3 */
            for (short i_9 = 1; i_9 < 24; i_9 += 3) 
            {
                for (unsigned char i_10 = 1; i_10 < 22; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        {
                            arr_37 [i_7 - 1] [i_8] [i_9 + 1] [20ULL] [i_10] = ((/* implicit */signed char) (short)-15);
                            arr_38 [i_10] [i_10] [i_10] [i_10 + 1] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (-535719186)))) ? ((+(arr_35 [i_10] [i_9 + 1]))) : (((/* implicit */unsigned long long int) ((long long int) (unsigned char)178)))));
                            var_27 = ((/* implicit */signed char) (short)-32752);
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22317)) ? (949629549) : (((/* implicit */int) arr_30 [i_7] [i_7]))))) ? (((/* implicit */long long int) ((((/* implicit */int) (short)-29742)) | (240)))) : ((~(914006578987218921LL)))));
                        }
                    } 
                } 
            } 
            arr_39 [i_8] [i_7] = ((/* implicit */long long int) arr_30 [i_8 - 1] [i_7 + 1]);
        }
        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1LL)))))));
    }
}
