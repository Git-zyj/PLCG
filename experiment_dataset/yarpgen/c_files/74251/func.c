/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74251
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 = ((((var_12) ? (arr_1 [i_0]) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_0 [i_0] [i_0]))))) % (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_8)))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            var_20 = ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((var_7) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))))) ? (((((72680062U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65526))))) ? (654455886512616407LL) : (4479777543887220909LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))));
            var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_16))))));
        }
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)27))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_17))))) ? ((((_Bool)1) ? (8876028242733547623LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24584))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_4))))));
    }
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_22 = ((/* implicit */_Bool) -8876028242733547650LL);
                arr_13 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24)))))) ? (((/* implicit */int) min((arr_6 [i_2] [i_3]), (arr_6 [i_2] [i_2])))) : (((/* implicit */int) ((unsigned short) (unsigned short)65535)))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 1) 
                    {
                        {
                            arr_19 [i_2] [i_2] [i_4] [8LL] = min((((/* implicit */unsigned int) ((var_3) ? (((/* implicit */int) arr_6 [i_2] [i_6])) : (((/* implicit */int) arr_6 [i_2] [i_6]))))), (((unsigned int) -9223372036854775797LL)));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)23547)) > (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) (unsigned short)30990)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13522))) : (9115555101271568463LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2])) || (((/* implicit */_Bool) var_0))))))));
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_3])))))) ? (max((((/* implicit */unsigned int) ((var_1) >= (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3716942474U))))) : (((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_3]))) : (var_9)))));
        }
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_1))) != (((/* implicit */long long int) 11U))));
            arr_23 [i_2] = ((/* implicit */unsigned short) var_9);
        }
        for (unsigned int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            arr_27 [i_2] [i_2] = ((/* implicit */_Bool) arr_24 [i_2]);
            arr_28 [i_2] [i_8] [i_2] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -9223372036854775791LL)) ? (8876028242733547623LL) : (((/* implicit */long long int) var_5)))) <= (var_10))) ? (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2]))))) : (((((/* implicit */long long int) ((var_15) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) * (((long long int) (_Bool)1))))));
        }
    }
    var_26 = var_12;
    var_27 = ((/* implicit */long long int) var_11);
    var_28 = ((/* implicit */long long int) (unsigned short)53508);
}
