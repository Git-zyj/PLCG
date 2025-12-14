/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99968
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_4)) : (var_13))), (((/* implicit */unsigned int) var_7)))))))));
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (unsigned short)62639))));
    var_16 = ((/* implicit */unsigned char) min((var_2), (((/* implicit */long long int) min((-1725937140), (((((/* implicit */int) (unsigned char)220)) - (((/* implicit */int) (signed char)117)))))))));
    var_17 = ((/* implicit */unsigned char) (-(var_1)));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((max((((/* implicit */int) (signed char)-125)), (178521561))) >> (((((/* implicit */int) arr_6 [i_0 + 2])) - (106))))))));
                        var_18 = ((/* implicit */int) ((unsigned short) (signed char)117));
                    }
                } 
            } 
        } 
        arr_14 [i_0] = ((/* implicit */signed char) min((arr_11 [i_0] [i_0]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)117))) < (min((((/* implicit */unsigned int) var_7)), (var_13))))))));
        arr_15 [13LL] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_8 [i_0 - 2]))));
        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) 8490071133289741064LL))))))));
    }
}
