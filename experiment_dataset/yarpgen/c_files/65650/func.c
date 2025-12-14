/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65650
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
    var_13 *= ((/* implicit */unsigned short) var_10);
    var_14 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)5)))) != ((~(((/* implicit */int) arr_1 [i_1])))))))) - (((var_1) & (((/* implicit */long long int) (+(var_6)))))));
                arr_5 [i_0] [i_0] [(short)10] = ((/* implicit */unsigned short) (short)16888);
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [(unsigned char)4] = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)-16889))))));
                            arr_11 [i_3] [i_3] [i_2] [i_3] &= ((/* implicit */unsigned short) (_Bool)1);
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 3; i_4 < 19; i_4 += 4) 
                            {
                                var_15 = ((/* implicit */_Bool) (-(min((((((/* implicit */int) arr_0 [i_2] [i_1])) * (((/* implicit */int) var_2)))), (((/* implicit */int) ((unsigned short) var_2)))))));
                                arr_14 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_1] [i_0] [(unsigned short)17]);
                                var_16 &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6240))) ^ (((((-5311047346575626140LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (short)-16879)) + (16894))) - (15)))))));
                                arr_15 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) var_6);
                            }
                            for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 3) 
                            {
                                arr_20 [(unsigned short)2] [i_3] [i_5 + 1] [i_3] [i_3] [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) min((((unsigned char) (signed char)42)), (((/* implicit */unsigned char) (_Bool)1)))))) : (arr_7 [i_0] [i_1] [(unsigned short)19] [i_3])));
                                var_17 = 591817749;
                                arr_21 [i_0] [i_0] [i_3] [i_2] [i_5 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) min(((unsigned short)13082), (((/* implicit */unsigned short) var_7)))))) ? (((((/* implicit */int) (short)-31183)) % (((/* implicit */int) (unsigned char)150)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_5 - 1] [i_5 - 1] [i_0] [(unsigned short)13])))))));
                                arr_22 [i_0] [i_0] [i_2] [i_3] [i_3] = ((/* implicit */_Bool) arr_18 [i_0] [i_1] [16LL] [i_0] [i_5 + 3]);
                                var_18 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)16864))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_0] [i_3] [i_3] [i_3] [i_5 + 2])) ? (var_8) : (((/* implicit */long long int) 760875022U))))) ? (max((((/* implicit */long long int) var_11)), (-1841938254594946319LL))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)9652)), (var_10)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 13013042390620515743ULL)) ? (3052057730U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))))))));
                            }
                            for (unsigned char i_6 = 4; i_6 < 21; i_6 += 4) 
                            {
                                arr_26 [i_0] = ((/* implicit */unsigned short) (short)31785);
                                arr_27 [i_6] |= ((/* implicit */unsigned short) ((signed char) min((((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), (var_2)))), (min((((/* implicit */long long int) (short)22571)), (-4828518700994927834LL))))));
                            }
                            var_19 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)-31183)) ? (((/* implicit */int) (short)31179)) : (-813286972)))) <= (var_1)));
                        }
                    } 
                } 
                var_20 += ((/* implicit */long long int) ((unsigned short) arr_9 [i_1] [i_1] [(_Bool)1]));
            }
        } 
    } 
}
