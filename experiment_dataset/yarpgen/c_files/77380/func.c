/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77380
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
    var_15 = (unsigned short)41816;
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) min((var_0), ((unsigned short)65528)))), (min((((/* implicit */int) ((unsigned short) (unsigned short)7))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3))))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (var_1)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */unsigned short) max(((+(((/* implicit */int) (unsigned short)10106)))), (((/* implicit */int) min(((unsigned short)9051), (((/* implicit */unsigned short) ((((/* implicit */int) var_12)) != (((/* implicit */int) (unsigned short)55708))))))))));
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_2)) % (((/* implicit */int) arr_0 [i_0] [i_1 - 1])))) >> ((((-(((/* implicit */int) var_3)))) + (16980)))))) ? ((-(((/* implicit */int) var_2)))) : (((/* implicit */int) max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 4; i_3 < 12; i_3 += 2) 
        {
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
            {
                for (unsigned short i_5 = 2; i_5 < 13; i_5 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18792)) ? (((/* implicit */int) min(((unsigned short)7519), ((unsigned short)14147)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_4])) < (((/* implicit */int) var_14)))))))) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)46744)) != (((/* implicit */int) (unsigned short)7))))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2])))))))) : (((/* implicit */int) (unsigned short)58016))));
                        arr_19 [i_2] [i_4] [i_4] [i_3 + 2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((var_7), (arr_4 [i_2 - 1] [i_5 + 3] [i_5 + 3]))))));
                    }
                } 
            } 
        } 
        arr_20 [i_2] = (unsigned short)22806;
    }
}
