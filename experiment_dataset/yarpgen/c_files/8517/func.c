/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8517
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
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(((var_5) % (var_8))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) (~(-1387622852)));
                arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3012)) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_5 [i_0] [i_1]))) : (((long long int) arr_1 [i_0]))))) ? (min((arr_2 [i_0] [6LL]), (((/* implicit */long long int) arr_4 [i_0] [i_1])))) : (arr_1 [i_1])));
                arr_7 [i_1] [i_1] = ((/* implicit */_Bool) max(((+((-(8646911284551352320ULL))))), (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_4 [i_0] [i_0])))))))));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) (signed char)51)))), (((/* implicit */int) arr_4 [(short)3] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)47))))) > (((((((/* implicit */int) arr_9 [i_2])) * (((/* implicit */int) var_18)))) / (((/* implicit */int) (_Bool)1))))));
        var_25 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_9 [i_2]))))));
    }
    for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        var_26 = (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3]))) : (var_5))));
        arr_14 [i_3] = ((/* implicit */long long int) max(((((_Bool)1) ? (16920789676593497232ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)47))))), (9799832789158199290ULL)));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        arr_23 [i_6] [i_3] [i_3] [i_3 + 1] = (short)16897;
                        var_27 = ((/* implicit */_Bool) max((((/* implicit */short) (signed char)-48)), (max(((short)8064), ((short)-8047)))));
                        var_28 = ((/* implicit */int) var_9);
                        var_29 = ((/* implicit */signed char) (-(max((max((((/* implicit */unsigned long long int) 5279918798937538476LL)), (3458764513820540928ULL))), (((/* implicit */unsigned long long int) min((var_17), (((/* implicit */long long int) var_19)))))))));
                    }
                } 
            } 
        } 
        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) max((((((8646911284551352320ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) % (((3796103074674289649ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14281))))))), (((/* implicit */unsigned long long int) var_10)))))));
    }
}
