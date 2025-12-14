/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99206
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_10 += ((/* implicit */int) (-(0LL)));
                    arr_9 [i_2] = ((((int) max((615293566), (32767)))) >> (((617849668400881250LL) - (617849668400881246LL))));
                    var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */int) var_6)) >> (((18446744073709551615ULL) - (18446744073709551588ULL)))))))) | (((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) & (((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */long long int) -250291799)) : (7870393625357531676LL)))))));
                    arr_10 [(short)9] [i_2] [19ULL] = ((/* implicit */unsigned long long int) var_0);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_15 [(short)14] [i_1] [i_2] [i_2] [i_2] [i_2] [i_0] |= ((/* implicit */unsigned int) (-(((int) arr_1 [i_2] [i_1 - 1]))));
                                arr_16 [(_Bool)1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] |= ((/* implicit */unsigned long long int) max((arr_4 [i_0] [18U] [i_2]), (((((/* implicit */int) (_Bool)0)) >> (((/* implicit */int) ((3204010470U) < (((/* implicit */unsigned int) -32767)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        var_12 += ((/* implicit */unsigned char) (+((-(((/* implicit */int) var_9))))));
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            arr_23 [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) || (((/* implicit */_Bool) (+(arr_21 [i_6] [i_5] [i_5]))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                for (int i_8 = 2; i_8 < 20; i_8 += 4) 
                {
                    for (unsigned int i_9 = 3; i_9 < 20; i_9 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 617849668400881250LL)) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */long long int) arr_19 [i_8 + 1]))))) : (((var_3) & (((/* implicit */unsigned long long int) var_5))))));
                            var_14 = ((/* implicit */int) var_5);
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (+(0LL))))));
            arr_32 [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_13 [i_6] [(signed char)2] [i_5] [i_5] [i_5] [i_5]))) || (((/* implicit */_Bool) (((-(790708434386532546ULL))) ^ (((/* implicit */unsigned long long int) (-(var_8)))))))));
        }
    }
    for (signed char i_10 = 2; i_10 < 13; i_10 += 2) 
    {
        arr_36 [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((((/* implicit */int) arr_20 [i_10] [i_10])) - (222)))));
        arr_37 [15] [i_10] &= ((/* implicit */int) 1099511627775LL);
        arr_38 [4] = ((/* implicit */signed char) ((unsigned int) ((((((/* implicit */int) arr_28 [i_10])) + (2147483647))) >> (((var_1) / (var_1))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((int) -250291799)))));
    }
}
