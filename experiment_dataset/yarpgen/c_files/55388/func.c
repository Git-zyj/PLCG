/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55388
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
    var_19 = (short)5558;
    var_20 += ((((/* implicit */_Bool) max((var_3), ((short)-5538)))) ? (((((/* implicit */_Bool) var_9)) ? (var_6) : (var_11))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_5)))), (((/* implicit */int) (short)-5582))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_11)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)10433))))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (2245692716U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
        var_22 |= ((/* implicit */unsigned int) ((long long int) arr_0 [i_0 - 1] [i_0 - 1]));
        arr_3 [i_0] = ((/* implicit */unsigned int) (short)5551);
    }
    for (short i_1 = 2; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned int) (short)10452);
        /* LoopSeq 1 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (short i_3 = 1; i_3 < 15; i_3 += 3) 
            {
                for (unsigned int i_4 = 3; i_4 < 15; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_24 = ((/* implicit */short) (~(1306455017U)));
                            var_25 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1 + 2])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) max(((~(var_11))), (((/* implicit */long long int) (short)10445))))) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) arr_2 [i_1] [i_2])) : (((/* implicit */int) ((short) var_2))))) : (((/* implicit */int) ((arr_11 [i_5] [i_3 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)6))))))))))))));
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((var_13), (((/* implicit */long long int) (short)14317)))), (((/* implicit */long long int) (short)31506))))) ? (((((/* implicit */_Bool) ((short) (short)14294))) ? (((((/* implicit */_Bool) (short)5540)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (arr_6 [i_1] [i_2 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (short)5558))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)1984)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)16602))) : (1306455017U))), (min((arr_4 [i_1] [i_1]), (((/* implicit */unsigned int) (short)-30491)))))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (short i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((unsigned int) arr_5 [i_7])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (+(((/* implicit */int) arr_13 [11U] [i_2] [i_2 + 1] [i_2] [i_2] [i_2]))))))) : (((((/* implicit */_Bool) max((arr_9 [i_1] [i_2]), ((short)10461)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [i_1] [i_6] [i_7] [i_7])) / (((/* implicit */int) arr_17 [(short)15] [i_7] [i_2] [i_1] [i_2] [i_1]))))) : (arr_4 [i_1] [i_1])))));
                            arr_26 [i_8] [i_7] [i_7] [i_7] [i_1 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_17 [i_6] [i_6] [i_6] [i_6] [i_1] [i_1])), (arr_7 [i_8])))) ? ((-(-941298298196744313LL))) : (((/* implicit */long long int) (+(((/* implicit */int) (short)-5804)))))))) ? (((/* implicit */int) arr_22 [i_7] [(short)0] [4LL] [i_7] [i_7] [i_8 + 1])) : (((/* implicit */int) arr_0 [i_8] [i_6]))));
                        }
                    } 
                } 
            } 
            arr_27 [i_1 - 2] [i_2] = ((/* implicit */short) (+(((/* implicit */int) arr_25 [i_1] [i_1] [i_1] [i_1 - 2]))));
        }
        var_29 += ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) var_14))) ? ((-(((/* implicit */int) ((short) (short)14294))))) : (((/* implicit */int) (short)-18095))));
        var_30 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (short)-10520))))), (((/* implicit */long long int) ((2057031124U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))) ? (max((((/* implicit */int) ((short) var_1))), ((~(((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 - 2])))))) : (((((/* implicit */int) arr_13 [i_1] [i_1 - 1] [i_1] [(short)0] [i_1] [i_1 + 1])) - (((/* implicit */int) min(((short)-10444), ((short)-23455))))))));
    }
    for (short i_9 = 2; i_9 < 14; i_9 += 4) /* same iter space */
    {
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)10433)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1984))) : (var_11))), (((/* implicit */long long int) ((short) (short)10443)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9] [i_9]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9] [i_9 - 2] [4LL] [i_9 - 1] [i_9] [4LL])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_2))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14294)))))));
        var_32 |= ((/* implicit */short) arr_6 [i_9] [7U]);
        var_33 = ((/* implicit */short) (((!(((/* implicit */_Bool) 2431189250U)))) ? (min((arr_29 [i_9]), ((-9223372036854775807LL - 1LL)))) : (var_6)));
    }
}
