/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86154
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1313555196587387633ULL)))) / (var_4))))));
    var_13 = ((/* implicit */signed char) ((((/* implicit */int) var_0)) != (((/* implicit */int) (((-(((/* implicit */int) (unsigned char)8)))) <= (((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) 15709527857462175718ULL)) && (((/* implicit */_Bool) (unsigned char)244)))))))) ? (var_7) : (((/* implicit */unsigned int) max((((/* implicit */int) ((4184567256U) > (var_8)))), (((int) arr_0 [i_1])))))));
                                var_15 = ((/* implicit */int) ((((4184567252U) << (((287603251) - (287603249))))) > (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)248)) ^ (((/* implicit */int) arr_8 [i_4 + 1] [i_4] [i_4] [(signed char)4] [i_4 - 1] [i_4])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned short i_6 = 4; i_6 < 12; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (short)10))));
                                var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) 110400017U)) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) (short)1))));
                                var_18 &= ((/* implicit */unsigned short) var_2);
                                var_19 = ((/* implicit */int) var_9);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_8 = 4; i_8 < 7; i_8 += 1) 
    {
        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            for (unsigned short i_10 = 1; i_10 < 8; i_10 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) var_11))))) == (((/* implicit */int) ((var_2) > (((/* implicit */int) arr_4 [i_8]))))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59224)) ? (((/* implicit */int) arr_4 [i_8])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((short)-2117), (((/* implicit */short) arr_12 [0] [0] [i_8])))))) : (4184567253U)))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32744)) ? (((((/* implicit */_Bool) 4057433988U)) ? (((/* implicit */long long int) (-(378598668)))) : (arr_18 [i_8 - 4] [i_9] [i_9] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_25 [i_10 + 1]))))));
                }
            } 
        } 
    } 
}
