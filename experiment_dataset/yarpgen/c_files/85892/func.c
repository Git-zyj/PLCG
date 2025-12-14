/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85892
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
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) (((-(arr_1 [i_0 - 1]))) <= (arr_1 [i_0])));
        var_19 = var_17;
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (long long int i_3 = 3; i_3 < 18; i_3 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) -1226566975)) || (((/* implicit */_Bool) max((arr_8 [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) arr_7 [i_3] [i_3])))))))) : (((/* implicit */int) var_11))));
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)56047)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 1; i_4 < 20; i_4 += 4) 
        {
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    arr_15 [i_4] [i_4] [i_5] [i_1] = ((/* implicit */int) ((unsigned int) var_3));
                    var_22 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (signed char)-112))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */long long int) ((_Bool) ((int) min(((short)-1), (((/* implicit */short) (unsigned char)151))))));
    var_24 = ((/* implicit */long long int) min((((/* implicit */short) ((unsigned char) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_18)))))), (var_7)));
}
