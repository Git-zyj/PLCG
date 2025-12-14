/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98832
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
    var_18 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_19 &= ((/* implicit */unsigned char) ((((/* implicit */int) (((~(((/* implicit */int) arr_1 [i_0])))) <= (((/* implicit */int) var_15))))) <= (((((/* implicit */int) ((short) (_Bool)1))) * (((/* implicit */int) (!(((/* implicit */_Bool) -2204405943257291334LL)))))))));
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (short)32746)) : (((/* implicit */int) (_Bool)1))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            var_21 = ((/* implicit */short) arr_5 [i_1] [i_2] [(_Bool)1]);
            var_22 = ((/* implicit */signed char) (~((~(18446744073709551615ULL)))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 22; i_3 += 2) 
            {
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (arr_5 [i_2] [i_2] [i_2]))))) & (((((/* implicit */_Bool) (unsigned char)222)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11062))) : (arr_2 [i_2] [i_3])))));
                        arr_15 [i_1] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (_Bool)1);
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_5 = 2; i_5 < 20; i_5 += 4) 
            {
                for (unsigned char i_6 = 2; i_6 < 22; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        {
                            arr_23 [i_1] [i_2] = ((/* implicit */unsigned int) (((_Bool)1) ? ((~(((((/* implicit */int) arr_21 [i_1] [i_5 + 3] [i_6 - 2])) ^ (((/* implicit */int) arr_6 [i_5])))))) : (((/* implicit */int) (!((_Bool)1))))));
                            arr_24 [i_5] [i_5] [i_5] [i_2] = ((/* implicit */short) ((-16) <= (((/* implicit */int) arr_8 [i_6] [i_2] [i_6]))));
                            var_24 = ((/* implicit */unsigned int) (~(min((max((((/* implicit */unsigned long long int) (short)-2)), (arr_14 [i_7] [i_2]))), (((/* implicit */unsigned long long int) ((2204405943257291327LL) != (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
                            arr_25 [i_6] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) (unsigned char)247)))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned int) ((unsigned long long int) (_Bool)1));
        }
        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (short)960))));
            var_27 &= ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)480)) ? (max((((/* implicit */int) (_Bool)1)), (-928100529))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_8] [i_8] [i_1] [i_1]))))))));
        }
        var_28 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)482))))) ? (((((/* implicit */_Bool) 2204405943257291334LL)) ? (-2204405943257291331LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)3))))) : (((/* implicit */long long int) 6U)))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) (short)11061)))))))));
    }
}
