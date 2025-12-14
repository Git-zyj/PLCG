/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79191
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
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((unsigned char) ((((/* implicit */_Bool) 1474627853)) ? (var_1) : (((/* implicit */long long int) -1474627853))))), (((/* implicit */unsigned char) ((_Bool) (+(-1474627853))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_15 [i_1] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned char) -1474627860))) ? (((/* implicit */int) min((var_12), (var_12)))) : (((/* implicit */int) arr_10 [i_1]))))));
                                arr_16 [i_0] [i_1] [0U] [i_3] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)42)) & (((/* implicit */int) (_Bool)0))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1145101900419435797LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)3891))) : (-1145101900419435771LL)))))) ? (1145101900419435797LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-23)))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_21 [i_6] [6ULL] [6ULL] [i_6] [i_6] [(unsigned char)6]))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */short) arr_17 [i_0] [i_0] [(_Bool)1]))))) ? ((-(((/* implicit */int) var_15)))) : (((/* implicit */int) ((unsigned char) arr_6 [i_6] [i_6])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((signed char) (((~(((/* implicit */int) var_3)))) == ((+(((/* implicit */int) var_5)))))));
    var_24 |= ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        for (signed char i_8 = 0; i_8 < 15; i_8 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((long long int) ((short) arr_28 [i_7 - 1]))))));
                var_26 = ((/* implicit */unsigned short) max((((unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)18680))))), (((/* implicit */unsigned long long int) ((short) (_Bool)1)))));
                var_27 = ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) var_7)))));
            }
        } 
    } 
}
