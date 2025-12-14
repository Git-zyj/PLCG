/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7821
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7821 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7821
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) ((unsigned int) 5110220051749696200LL));
        /* LoopSeq 1 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            var_21 = (~(1342282133480944065LL));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    {
                        arr_9 [i_0] [i_0] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)87)) % (var_17)));
                        var_22 = ((/* implicit */unsigned long long int) ((long long int) arr_7 [i_2 - 1] [i_2 - 1] [i_2 - 2] [(unsigned char)2] [i_2 - 2] [i_2]));
                        arr_10 [i_0] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) - (-5110220051749696200LL))));
                        var_23 = arr_8 [i_1];
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 22; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 1; i_5 < 20; i_5 += 1) 
                {
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) -7026514533014548602LL)) ? (((/* implicit */unsigned long long int) -7026514533014548601LL)) : (var_19)));
                        var_25 = ((/* implicit */unsigned int) ((arr_8 [i_4]) ? (var_17) : (((((/* implicit */int) var_2)) - (((/* implicit */int) (_Bool)1))))));
                        var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)56647))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            arr_20 [(_Bool)1] [11U] [i_0] [i_5 + 2] [i_6] = ((/* implicit */unsigned char) ((long long int) (unsigned char)117));
                            arr_21 [i_0] [6] = ((/* implicit */unsigned int) 1342282133480944065LL);
                        }
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_0 [20U] [i_5 - 1])) ? ((-(((/* implicit */int) (short)92)))) : (((/* implicit */int) ((signed char) var_2))))))));
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) ((int) (short)-90));
        }
        arr_22 [8U] |= ((/* implicit */short) -1169755642);
        var_29 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2624174022U)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (short)92))));
    }
    var_30 = ((/* implicit */int) var_11);
    var_31 = ((/* implicit */signed char) max(((~(((unsigned int) var_16)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7)))))));
}
