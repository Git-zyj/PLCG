/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6533
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        arr_10 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) min(((-(((/* implicit */int) (unsigned char)36)))), (min((((/* implicit */int) (unsigned short)48891)), ((~(((/* implicit */int) (unsigned char)220))))))));
                        var_15 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)130)) ? (-1253050693) : (((/* implicit */int) (short)11151)))) | (min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) -846985890)) ? (-846985890) : (((/* implicit */int) arr_0 [i_1 - 1] [i_2]))))))));
                    }
                    var_16 = ((/* implicit */short) min((min((((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (short)12184)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1])))), (((/* implicit */int) (unsigned short)48891)))), (((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)47751))))))));
                    var_17 = min((((/* implicit */unsigned short) min(((short)26378), (((/* implicit */short) (unsigned char)17))))), (min((((/* implicit */unsigned short) arr_4 [i_1])), (min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned short) arr_5 [i_0] [i_2])))))));
                    var_18 = ((/* implicit */int) arr_5 [i_1 + 3] [i_2 - 1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_6), (((/* implicit */int) (unsigned char)36))));
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)55358))));
}
