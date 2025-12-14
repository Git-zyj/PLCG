/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57272
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_7)) + (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (short)-32740))))))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] = ((/* implicit */_Bool) var_4);
                                var_19 = ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) var_5))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_23 [i_5] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) var_6)) & (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)65527)))))) + (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_17)))))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */_Bool) (((-(((/* implicit */int) (short)32739)))) ^ (((/* implicit */int) ((unsigned char) var_16)))));
                            var_21 = ((/* implicit */_Bool) var_15);
                        }
                    } 
                } 
                var_22 = (-((~(((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_16)))))));
                arr_30 [(unsigned char)16] |= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))) | (var_18))))) * (((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) / ((+(17854864223174425007ULL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                arr_37 [i_9] [i_9] [0LL] |= ((/* implicit */_Bool) ((((((9108498048562472535ULL) + (((/* implicit */unsigned long long int) var_11)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)623)) >> (((/* implicit */int) (unsigned char)14)))))));
                arr_38 [(unsigned short)6] &= ((/* implicit */_Bool) var_18);
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_16))) ^ ((-(var_17)))))) ? (var_13) : (((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (short)-32740))) / (var_1)))))))))));
            }
        } 
    } 
}
