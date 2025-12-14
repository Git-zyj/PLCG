/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77232
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
    var_18 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) arr_6 [i_1] [i_0])) ? (((/* implicit */int) ((unsigned short) min((var_4), (((/* implicit */long long int) arr_3 [i_0])))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) 6774733485892846369ULL)) && (((/* implicit */_Bool) 4294967287U))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : (var_2)))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-118))) + (min((var_4), (((/* implicit */long long int) arr_9 [i_2] [i_3]))))));
                            arr_13 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned char) arr_11 [i_2] [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((arr_3 [(short)12]) + (((/* implicit */int) (signed char)106))))) : (((unsigned long long int) arr_6 [i_1] [i_2])))), (((/* implicit */unsigned long long int) max((((int) -9223372036854775788LL)), (((int) var_10)))))));
                            var_21 = ((/* implicit */unsigned short) ((unsigned char) min((min((6774733485892846359ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (((/* implicit */unsigned long long int) var_12)))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((11672010587816705233ULL) | (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_0] [i_3])))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)28083))))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */signed char) min(((+(min((((/* implicit */unsigned long long int) arr_11 [i_1] [i_0] [i_0] [8U])), (var_3))))), (((max((8137008560727856568ULL), (((/* implicit */unsigned long long int) var_8)))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)34212)), (var_0))))))));
                arr_14 [i_1] [(short)4] = (unsigned short)46931;
                var_24 = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8128)) && (((/* implicit */_Bool) arr_9 [i_0] [i_1]))))) + (((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1])))) > (((/* implicit */int) var_11))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -222856901)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)12995))))) : (((((/* implicit */long long int) ((/* implicit */int) var_13))) + (var_4))))) != (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-12985)) : (((/* implicit */int) (_Bool)1))))))));
}
