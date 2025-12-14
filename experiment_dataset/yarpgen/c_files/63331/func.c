/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63331
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) (short)-8449)) || (((/* implicit */_Bool) 12656250023324490787ULL))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned long long int) var_8);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)-1)), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2]))) - (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)21820))) : (var_8)))))));
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                arr_9 [i_2] [i_0] = ((/* implicit */int) var_3);
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    arr_13 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-8421))));
                    var_17 += ((/* implicit */_Bool) ((var_2) % (((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [i_2] [i_3]))));
                }
            }
            for (signed char i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (unsigned char)0))))), (arr_1 [i_1] [i_4])))) ? (((var_6) ? (arr_5 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0 + 3] [i_1])) ? (arr_7 [i_0] [i_0] [i_0 + 3] [i_0]) : (((/* implicit */int) var_1)))))));
                arr_16 [i_4] [i_1] = ((/* implicit */unsigned short) max(((short)-8450), ((short)8449)));
                var_19 = ((/* implicit */unsigned char) var_5);
            }
            for (int i_5 = 2; i_5 < 8; i_5 += 4) 
            {
                var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) ((var_10) < (((/* implicit */unsigned int) ((/* implicit */int) (short)8462)))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_10))))))));
                var_21 = ((/* implicit */short) var_8);
            }
            for (unsigned char i_6 = 4; i_6 < 11; i_6 += 3) 
            {
                arr_22 [10LL] [i_1] [(unsigned char)9] = ((/* implicit */int) (+(var_7)));
                var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_1)) : (var_9)))) ? (((/* implicit */int) ((((/* implicit */long long int) var_4)) != (5164647075181955919LL)))) : (((((/* implicit */_Bool) arr_1 [i_6] [i_0 - 1])) ? (((/* implicit */int) arr_17 [i_0 + 3])) : (((/* implicit */int) arr_10 [i_1] [i_1] [10] [i_1]))))))));
            }
        }
        for (int i_7 = 0; i_7 < 12; i_7 += 3) /* same iter space */
        {
            arr_25 [(unsigned char)5] [i_0] [(unsigned char)5] = ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (unsigned char)18)))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_5))) >= (((((/* implicit */long long int) ((/* implicit */int) (short)-8465))) ^ (-5164647075181955913LL)))))));
            arr_26 [i_7] = ((/* implicit */signed char) ((((/* implicit */int) var_12)) > (((/* implicit */int) (!(((/* implicit */_Bool) 10197374U)))))));
            var_23 = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0] [i_7])) | (var_8)))), ((~(arr_11 [i_7] [i_7] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) ((((((int) var_2)) + (2147483647))) << (((((/* implicit */int) arr_23 [i_0 - 1] [i_0 + 2])) - (203))))))));
            arr_27 [i_0 + 1] [i_0 + 1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) * (arr_14 [i_0] [i_0 + 2] [i_0])));
            /* LoopNest 3 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        {
                            arr_34 [i_9] [i_9] [i_9] [i_8] [i_7] [i_7] [i_0] = ((((max((((/* implicit */unsigned long long int) var_5)), (arr_14 [i_0 - 1] [i_0] [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_21 [i_10] [i_9] [i_7] [i_7]) : (((/* implicit */int) arr_23 [i_10] [i_7]))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((9085120968205628408ULL) > (((/* implicit */unsigned long long int) 1829378955)))))));
                            arr_35 [i_0] [i_8] [i_7] [i_8 - 1] [i_9] [i_10] = ((/* implicit */signed char) var_4);
                            arr_36 [i_0 + 2] [i_8] [(short)11] [i_0 + 2] = ((/* implicit */signed char) (~(((max((((/* implicit */long long int) (short)-11762)), (-5164647075181955898LL))) / (((((/* implicit */long long int) ((/* implicit */int) var_11))) | (arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32754))) < (926066444U)))) > ((-(((/* implicit */int) (_Bool)1))))));
                            arr_37 [i_0] [i_8] [(_Bool)1] [3ULL] [i_8] = ((/* implicit */long long int) arr_12 [5]);
                        }
                    } 
                } 
            } 
        }
        var_25 = ((/* implicit */int) ((min((var_13), (((/* implicit */unsigned long long int) min((var_1), (((/* implicit */unsigned short) var_3))))))) << (((((unsigned int) (+(((/* implicit */int) var_14))))) - (4294947852U)))));
    }
}
