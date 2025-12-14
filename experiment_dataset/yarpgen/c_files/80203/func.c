/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80203
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
    var_20 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_2 [1ULL] [(unsigned short)4] = ((((/* implicit */_Bool) (short)-13239)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)31189))))), (max((1538971399U), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (short i_2 = 3; i_2 < 12; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) min((((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) min(((unsigned short)31189), (var_12))))))), (max((arr_8 [i_2 - 1] [1] [i_2] [i_3] [i_1 + 2] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1538971398U)) ? (2147483647) : (((/* implicit */int) arr_1 [i_4] [i_4]))))))))))));
                            var_22 &= ((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned char)140), (((/* implicit */unsigned char) arr_11 [i_1 - 2] [i_1 - 2] [i_1] [i_1 + 2] [(short)10])))))));
                        }
                    } 
                } 
            } 
            arr_13 [(unsigned char)7] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / ((+(min((8388607U), (((/* implicit */unsigned int) arr_4 [i_1] [i_1]))))))));
        }
        for (int i_5 = 3; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (unsigned short i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_9 [i_0] [i_5] [i_8] [i_7]))))))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) 1538971399U)) && (((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8]))))) & (((((/* implicit */int) arr_0 [i_5])) | (((/* implicit */int) (unsigned char)105))))))) : (max((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_18 [i_6] [i_5] [i_6] [i_7 + 1] [i_7 + 1]))))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)22373)) / (((/* implicit */int) (signed char)122))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (7U)))) ? (((/* implicit */unsigned long long int) -766549907)) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19957))) - (2014408096577267993ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45576))))))))));
                            arr_22 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_5])) >> (((((arr_5 [i_8] [i_6] [0LL]) | (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_5] [i_6] [i_7 - 2] [(unsigned short)6]))))) + (63LL)))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */signed char) 16762684362902533580ULL);
        }
        var_26 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0]))));
        var_27 = ((/* implicit */int) (unsigned char)49);
    }
    var_28 = ((/* implicit */_Bool) var_7);
}
