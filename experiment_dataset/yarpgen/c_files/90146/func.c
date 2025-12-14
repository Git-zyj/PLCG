/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90146
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90146 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90146
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((((/* implicit */int) ((_Bool) (short)-3436))) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)9))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3423))) : (((((/* implicit */_Bool) arr_0 [i_2 - 2] [i_0])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-15))))) : (((unsigned int) -1LL))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_0 [i_1] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3448))) : (max((31ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) (short)3419)), (2147483647))))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) ((unsigned int) (~(((unsigned int) -9223372036854775800LL)))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 4; i_3 < 22; i_3 += 2) 
    {
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-3436)) > ((+(((/* implicit */int) (short)3425))))));
                /* LoopSeq 3 */
                for (unsigned int i_5 = 2; i_5 < 21; i_5 += 4) 
                {
                    var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3435)) ? (((/* implicit */int) (unsigned char)236)) : (((((/* implicit */int) arr_11 [i_5])) - (((/* implicit */int) arr_14 [i_4])))))))));
                    var_14 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((unsigned int) (short)3447))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)9), ((unsigned char)69))))) : (12ULL))) % (((/* implicit */unsigned long long int) min((16383), (((/* implicit */int) arr_11 [i_3 - 3])))))));
                }
                /* vectorizable */
                for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                {
                    arr_19 [i_3] [i_4] [i_4] |= ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (short)-2))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) : (((long long int) (signed char)-23))));
                    var_15 = ((/* implicit */unsigned int) ((long long int) (short)-3448));
                }
                /* vectorizable */
                for (signed char i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    arr_23 [i_4] [i_7] [i_4] [i_4] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)182))) : (2887818614494507681ULL)))));
                    arr_24 [i_4] [i_4] [i_4] [i_4] = (short)-3415;
                    arr_25 [i_3] [i_4] [i_7] [i_3] |= ((/* implicit */short) ((((unsigned int) (short)3426)) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-1)))));
                }
                arr_26 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)3419)) / (((/* implicit */int) (signed char)-101))));
            }
        } 
    } 
}
