/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79177
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79177 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79177
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
    var_16 |= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6))))) ? ((~(var_3))) : (((/* implicit */int) var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned char) arr_3 [i_1]);
                var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */int) (unsigned char)215)), (898938089))) == (max((((/* implicit */int) (unsigned char)210)), (min((var_7), (arr_5 [i_1])))))));
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))))), (arr_7 [i_1])))) : ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) : (((((/* implicit */_Bool) var_5)) ? (arr_5 [i_1]) : (((/* implicit */int) arr_6 [i_0]))))))));
                    var_19 |= ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_13))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551600ULL)) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) var_5)) > (arr_4 [i_1]))))))) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [5])) - (arr_4 [i_1])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((_Bool) arr_2 [i_1] [i_2]))))))));
                    var_21 *= ((/* implicit */_Bool) (+((~(var_3)))));
                }
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    for (signed char i_4 = 2; i_4 < 7; i_4 += 4) 
                    {
                        {
                            var_22 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((int) arr_12 [i_0] [i_1] [i_3] [i_0])) & (-1384853473))) : ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))))));
                            var_23 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (short)-5092)) ? (((/* implicit */int) (unsigned short)46891)) : (((/* implicit */int) (short)-15057)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50601)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((((/* implicit */int) var_4)) > (var_3)))) : (((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) var_4))))))) ? (((/* implicit */int) var_8)) : ((-((-(((/* implicit */int) (unsigned char)24))))))));
}
