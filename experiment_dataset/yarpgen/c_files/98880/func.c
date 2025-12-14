/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98880
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
    var_10 = ((/* implicit */unsigned short) (-(((((((/* implicit */int) var_0)) <= (((/* implicit */int) var_4)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned char i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0])))))));
                                arr_12 [i_0] [i_3 + 1] [(unsigned short)0] [(unsigned short)0] [i_1] [i_0] |= ((/* implicit */int) arr_2 [i_2]);
                                arr_13 [i_4] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> (((((/* implicit */int) arr_9 [7] [7] [i_3 - 2] [i_3] [10LL])) - (25587)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] [i_1] = ((/* implicit */short) ((((arr_4 [i_0] [i_1] [i_1]) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) ^ (var_2))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (var_5) : (arr_3 [i_1]))))));
                var_11 = ((/* implicit */int) arr_1 [i_1] [i_0]);
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned char) arr_9 [i_7] [(unsigned short)0] [0U] [(unsigned short)0] [i_0]);
                                var_13 = ((/* implicit */unsigned char) (-(((((((/* implicit */unsigned long long int) 22008120U)) > (13886513406798336575ULL))) ? (13886513406798336575ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 5644971225283133884LL)) >= (var_3)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_5);
    var_15 = ((/* implicit */unsigned short) var_8);
}
