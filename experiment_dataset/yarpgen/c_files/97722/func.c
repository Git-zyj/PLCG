/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97722
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
    var_15 = var_13;
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (short)-4211)) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) var_0)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)-32747))))) : (var_7)))) ? (((/* implicit */int) min(((!(((/* implicit */_Bool) var_13)))), ((!(((/* implicit */_Bool) var_14))))))) : (((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_2] = ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32739))) != (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]))))) : (((/* implicit */int) arr_4 [i_0] [i_2]))))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
                    arr_9 [i_0] [i_1] |= ((/* implicit */long long int) min((min((((/* implicit */int) max((var_13), (((/* implicit */short) (unsigned char)106))))), (((((/* implicit */_Bool) var_2)) ? (1015325130) : (-1015325131))))), (((((/* implicit */int) arr_0 [i_2])) | (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_2])), ((short)-32755))))))));
                    arr_10 [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) (unsigned short)39955)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1])))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                {
                    arr_16 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_3]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (((var_9) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3] [i_4])))))))));
                    arr_17 [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0]))))) / (var_7))) * (5435660200866839662LL)));
                    arr_18 [i_0] [(signed char)6] [i_0] = ((/* implicit */unsigned long long int) 7112287981371575390LL);
                }
            } 
        } 
        arr_19 [i_0] [i_0] = ((((/* implicit */_Bool) min(((~(((/* implicit */int) var_0)))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)42277))))))) ? (max((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) (unsigned short)39970)), (2943046206531510273LL))))) : (((/* implicit */long long int) min((arr_6 [i_0] [(signed char)0] [i_0] [i_0]), ((-(var_6)))))));
        arr_20 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_1))))) <= (arr_3 [i_0]))))) & (((((((/* implicit */int) arr_12 [i_0] [i_0])) != (((/* implicit */int) var_8)))) ? (((arr_13 [(signed char)13] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
    }
    var_17 = ((/* implicit */unsigned char) (((+(((/* implicit */int) min(((unsigned short)59015), (((/* implicit */unsigned short) var_8))))))) - (((/* implicit */int) ((signed char) var_6)))));
}
