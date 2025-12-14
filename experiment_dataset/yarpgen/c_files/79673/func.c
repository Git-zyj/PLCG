/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79673
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned int) ((_Bool) ((_Bool) var_16))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((unsigned int) var_15))) || (((var_9) < (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                    arr_10 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (3132508862U)))) < (((var_4) + (((/* implicit */long long int) ((/* implicit */int) var_11))))))))) < (var_2));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            {
                arr_16 [i_4] = ((/* implicit */short) ((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) var_3)))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_9))))));
                /* LoopNest 2 */
                for (short i_5 = 4; i_5 < 10; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                    {
                        {
                            arr_21 [i_3] [i_5] [i_5 - 4] [i_6] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned long long int) var_8))))) && (((((/* implicit */_Bool) 13623544518901643172ULL)) || (((/* implicit */_Bool) (unsigned short)44671)))))) ? (((long long int) ((_Bool) (_Bool)1))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_9)) : (var_8))))))));
                            arr_22 [i_3] [i_5] [i_5] [i_5 + 1] [i_6] [(unsigned char)8] = var_12;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
                    {
                        {
                            arr_29 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)20864)) || (((/* implicit */_Bool) -224625053396259864LL))));
                            arr_30 [i_4] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) / (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0)))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((((long long int) var_17)) <= (((long long int) var_8)))))));
                        }
                    } 
                } 
                arr_31 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_0)))) > (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) >> (((((var_0) != (((/* implicit */long long int) var_3)))) ? (((/* implicit */long long int) ((unsigned int) var_6))) : (var_4)))));
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 10; i_9 += 3) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            arr_36 [i_3] [i_3] [i_3] [9ULL] = ((/* implicit */long long int) ((((var_13) >> (((((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) - (8348116703035620306ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6))))));
                            arr_37 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) var_13);
                            arr_38 [11ULL] [i_4] [i_9 + 1] [i_4] [i_10] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? (((/* implicit */unsigned long long int) ((var_0) - (var_4)))) : (((((/* implicit */unsigned long long int) var_8)) & (var_2))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_15)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
