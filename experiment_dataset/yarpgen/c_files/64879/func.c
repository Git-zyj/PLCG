/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64879
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */unsigned int) var_10);
                var_21 -= arr_3 [(_Bool)1];
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))))) << (((((/* implicit */int) ((short) var_9))) + (32086)))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            {
                arr_8 [i_2] [i_2] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_6)))) ? (((/* implicit */int) (unsigned short)50107)) : (((/* implicit */int) var_19))))), (((6861447226437012912ULL) / (((/* implicit */unsigned long long int) arr_7 [i_2] [i_3])))));
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 22; i_4 += 4) 
                {
                    for (int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            arr_16 [i_5] [i_2] [i_2] [(signed char)6] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) (short)-16384)) && (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-16390)))))))));
                            var_23 += ((/* implicit */unsigned short) (unsigned char)255);
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)125)) ? (6861447226437012903ULL) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-16406)))))));
                        }
                    } 
                } 
                arr_17 [i_2] [i_2] = ((/* implicit */short) (~(min((((((/* implicit */_Bool) (short)-28637)) ? (11585296847272538704ULL) : (22ULL))), (((/* implicit */unsigned long long int) (~(arr_11 [i_2] [(signed char)18] [i_2] [i_2]))))))));
                var_25 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 4064261514U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8192))) : ((-9223372036854775807LL - 1LL)))));
                var_26 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) arr_12 [11LL] [3LL] [i_3] [(short)16])) > (arr_15 [i_2] [i_2] [i_2] [(short)5])))) : (((((/* implicit */_Bool) arr_4 [(_Bool)1])) ? (((/* implicit */int) arr_13 [i_2] [(unsigned char)20] [8U] [i_3])) : (((/* implicit */int) var_2))))))));
            }
        } 
    } 
}
