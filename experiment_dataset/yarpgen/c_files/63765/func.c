/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63765
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_11))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */int) var_13);
                            arr_9 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (short)2901)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1] [i_0]))))) : (((((/* implicit */long long int) ((arr_5 [(unsigned short)14] [(_Bool)1] [i_3]) << (((var_11) - (978696323942669498ULL)))))) / (arr_3 [i_0] [i_0] [i_0])))));
                        }
                    } 
                } 
                arr_10 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1])) ? (17708493709183555569ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [18])))));
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-2901)) ? (((/* implicit */int) (unsigned short)63133)) : (((/* implicit */int) (short)2929)))), (((/* implicit */int) ((var_2) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) > (((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) (unsigned char)25))))))))) : (((int) (short)-2930)))))));
                                arr_21 [(unsigned short)1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) >= (var_0))))) % (min((arr_14 [i_0] [i_0] [i_0]), (((/* implicit */long long int) var_15))))))) && (((/* implicit */_Bool) ((var_4) + (((/* implicit */int) ((_Bool) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_7 = 2; i_7 < 16; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (int i_9 = 1; i_9 < 19; i_9 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1482504204)) ? (-518285562) : (((/* implicit */int) (unsigned char)222))))) ? (((/* implicit */int) arr_13 [i_9 - 1] [i_7] [i_7])) : (((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) (short)-27059))))))))))));
                                var_20 *= ((/* implicit */unsigned char) (unsigned short)2109);
                                var_21 += ((/* implicit */short) (unsigned short)1858);
                                var_22 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_8 [i_0] [(short)18] [i_9] [i_7 + 2] [i_9 - 1] [9LL])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_7] [i_7 + 2] [i_9 - 1] [i_0]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned short)0))))))) ? (max((((/* implicit */long long int) max((-518285565), (((/* implicit */int) (signed char)-121))))), (var_12))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_5))))))))));
}
