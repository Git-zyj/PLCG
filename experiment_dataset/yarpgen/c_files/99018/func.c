/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99018
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((_Bool) var_4))), (max(((-(1498150918U))), ((~(1364084450U)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (int i_3 = 3; i_3 < 8; i_3 += 2) 
                    {
                        {
                            arr_8 [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_2] [(signed char)7]);
                            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min(((((+(((/* implicit */int) arr_6 [i_0 - 1] [i_1] [i_0 - 1] [i_0 - 1] [i_2] [i_2])))) + (((/* implicit */int) arr_4 [i_1] [i_1 - 1] [i_3])))), (((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_11) * (((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : (arr_3 [i_0])))), (0U))))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_15 [1] [i_1] = ((/* implicit */unsigned long long int) var_11);
                            var_16 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_0 [i_4])), (((min((((/* implicit */unsigned long long int) 1759338425)), (9269057291156440187ULL))) << (((((unsigned int) var_7)) - (1396478087U)))))));
                            var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (~(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1952535796U)) ? (var_2) : (1353808436)))), (min((1498150918U), (((/* implicit */unsigned int) arr_4 [i_4] [i_4] [i_4])))))))))));
                            var_18 -= ((/* implicit */short) ((unsigned short) max((arr_13 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 - 1]), (((/* implicit */short) var_9)))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((long long int) 2796816377U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) 
        {
            {
                var_20 += ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) ((int) var_2))) || (((/* implicit */_Bool) max((196580103U), (((/* implicit */unsigned int) var_4))))))))));
                arr_21 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4155862324U)) ? (((/* implicit */unsigned int) 1534899831)) : (3793445432U)));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_20 [i_7 + 3] [i_7 + 3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_20 [i_7 + 3] [i_7])))))))));
                arr_22 [i_6] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_20 [i_7] [i_6]))))));
            }
        } 
    } 
    var_22 = min((((((/* implicit */_Bool) max((((/* implicit */int) (signed char)6)), (1353808436)))) ? (min((((/* implicit */int) var_3)), (var_0))) : (((/* implicit */int) max((var_4), (((/* implicit */signed char) var_6))))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-1759338426)))) || (((/* implicit */_Bool) max((((/* implicit */short) var_6)), ((short)-13243))))))));
}
