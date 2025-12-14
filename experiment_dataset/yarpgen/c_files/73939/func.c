/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73939
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (((-(((/* implicit */int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])) == (((/* implicit */int) (signed char)-95))))))) <= (((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 + 1] [i_1 - 2] [i_1 - 2])) ? (((((/* implicit */_Bool) (short)10825)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (unsigned short)32020)))) : (((/* implicit */int) (signed char)-74))))));
                        arr_12 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) min((((signed char) (unsigned short)33515)), (var_1)))), ((~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_1 [i_0]))))))));
                        var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)248)) ? (((((/* implicit */_Bool) arr_4 [i_1] [(signed char)8])) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1 - 2])) : (((/* implicit */int) arr_4 [i_1] [i_1])))) : (max((((/* implicit */int) min(((short)-2304), ((short)2311)))), (((((/* implicit */int) (signed char)-66)) * (((/* implicit */int) (unsigned short)32033))))))));
                        var_11 = ((/* implicit */signed char) (unsigned char)6);
                    }
                    var_12 |= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)251))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned short)52614)))) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_4))));
    var_14 = ((/* implicit */signed char) (((((~(((/* implicit */int) (short)-14606)))) >> (((((/* implicit */int) var_1)) + (42))))) > (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) min((var_0), ((short)14616)))) : (((/* implicit */int) max((((/* implicit */short) var_2)), ((short)2309))))))));
}
