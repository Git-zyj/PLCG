/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93778
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
    var_11 = ((/* implicit */long long int) var_6);
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (unsigned char)204)), (var_3))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((arr_4 [i_0] [i_1] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_2]))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [(_Bool)1] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2]))) : (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2]))) / (2972055853464015516LL))))));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [3ULL] [i_1] [i_0]))) * (max((min((((/* implicit */unsigned long long int) arr_5 [i_1])), (12321682260327464483ULL))), (((/* implicit */unsigned long long int) (_Bool)1))))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) 6125061813382087132ULL)) ? (13002066137404247932ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                    arr_10 [i_0] [i_1] [i_0] [i_2 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (short)29420)) ? (13510612372069381501ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (unsigned short)64640))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_15 = (-(((((/* implicit */_Bool) 13510612372069381501ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_3 [i_4]))))) : (max((13510612372069381496ULL), (((/* implicit */unsigned long long int) (unsigned char)210)))))));
                                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */long long int) 5444677936305303683ULL);
                                var_16 = ((/* implicit */long long int) ((signed char) -1568283589148879903LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) min((var_7), (((/* implicit */unsigned char) ((7628014078324536813LL) > (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) >> (((((/* implicit */int) var_7)) - (13))))))));
    var_18 = ((/* implicit */unsigned int) ((_Bool) 1606459807U));
}
