/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93934
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
    var_14 = ((/* implicit */unsigned short) var_2);
    var_15 &= ((/* implicit */long long int) max((max(((+(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)38)) : (954443111)))))), (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_1)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (1333042016U)))))))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((signed char) var_13)))))) ? (((/* implicit */int) ((unsigned char) (+(var_12))))) : (245955853)));
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_6)))), (max((((/* implicit */int) arr_1 [i_0])), (var_12)))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 8994416590538564090ULL)) ? (((/* implicit */int) (short)13488)) : (((/* implicit */int) (short)-6471))))))) : (((unsigned int) max((var_10), (((/* implicit */unsigned long long int) var_5)))))));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) (unsigned short)62764)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))) : (13842868293613296004ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
        arr_11 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_0))))))) ? ((-(((((/* implicit */_Bool) var_4)) ? (arr_7 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) : (max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */short) var_5))))), (max((var_2), (((/* implicit */unsigned long long int) var_8))))))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
    {
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            {
                arr_18 [i_4] [i_4] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned short) (short)-29763))))), (max((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) - (var_10)))))));
                var_18 = ((/* implicit */signed char) max((247319993U), (((/* implicit */unsigned int) (signed char)-63))));
            }
        } 
    } 
}
