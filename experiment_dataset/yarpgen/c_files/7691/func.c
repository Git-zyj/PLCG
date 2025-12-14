/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7691
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
    var_20 = ((/* implicit */short) var_4);
    var_21 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) (((~(((/* implicit */int) ((_Bool) arr_8 [i_0]))))) | ((~(((/* implicit */int) arr_8 [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned int) (signed char)127);
                        arr_12 [i_3] [i_3] [i_2] [i_3] |= ((/* implicit */unsigned long long int) (unsigned char)120);
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) 1ULL)) && (((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (unsigned short)57464)))))) ? (arr_16 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))))))));
                        var_24 = ((/* implicit */unsigned char) (-(5660433332077206479LL)));
                        arr_17 [i_0] [i_0] [i_2] [i_4] [i_4] = arr_6 [i_0];
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 3491458925433820130LL))))) / ((-(((/* implicit */int) (unsigned char)61)))))) >> (((/* implicit */int) ((_Bool) min((var_17), (((/* implicit */unsigned char) var_0))))))));
                    }
                    arr_19 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */long long int) var_1);
                    arr_20 [i_0] = ((/* implicit */short) max((((((arr_1 [i_1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17469))))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_7)))) || (((((/* implicit */_Bool) arr_7 [i_2])) || (((/* implicit */_Bool) var_7)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_25 |= (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_0] [i_1]))))));
                        arr_24 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1])) ? (arr_10 [i_0] [i_0] [i_0] [i_1]) : (arr_10 [i_0] [i_0] [i_0] [i_1]))))));
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (short)8528)) & (((/* implicit */int) var_3)))) * ((~(((/* implicit */int) arr_22 [i_2] [i_2] [i_0] [i_0])))))))));
                    }
                }
            } 
        } 
    } 
}
