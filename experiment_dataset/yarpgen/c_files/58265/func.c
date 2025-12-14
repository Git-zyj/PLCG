/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58265
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_8))));
    var_20 ^= ((/* implicit */signed char) (short)31);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */short) arr_3 [(_Bool)1] [i_1 + 2] [i_1 - 2]);
                arr_5 [(short)4] [(short)4] |= ((/* implicit */long long int) (-((~((+(((/* implicit */int) (signed char)-11))))))));
                var_22 = ((/* implicit */int) (unsigned char)1);
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 + 3] [i_1 + 2])) ? (((((/* implicit */_Bool) -180424904)) ? (12097740401464782608ULL) : (32985348833280ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */_Bool) arr_2 [i_1])) ? (2841798584064219363LL) : (((/* implicit */long long int) 672093775U)))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0])), ((~(18446711088360718336ULL)))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-39)), (2206365030U)))) ? (((/* implicit */int) arr_7 [0U] [i_1] [i_4])) : ((~(((/* implicit */int) arr_8 [i_4]))))))) <= (((((/* implicit */long long int) ((/* implicit */int) (short)-6464))) - (576460751766552576LL))))))));
                                var_26 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-76)) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 32985348833280ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [0U] [i_2]))) : (3106825654010365208LL))), (arr_1 [i_2])))) : (min((((/* implicit */unsigned long long int) 2206365030U)), (32985348833279ULL)))));
                                var_27 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0]))))), (((((/* implicit */_Bool) (unsigned char)178)) ? (var_10) : (((/* implicit */int) (unsigned char)160))))))) ? (((/* implicit */int) (unsigned short)13469)) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)100)) && (((/* implicit */_Bool) arr_10 [i_4] [i_4])))))));
                                var_28 = ((/* implicit */long long int) ((unsigned int) (short)4423));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 4) 
    {
        var_29 = ((/* implicit */unsigned short) arr_15 [(signed char)1]);
        var_30 = ((/* implicit */short) ((((((/* implicit */_Bool) 1531544399)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)76))) : (31U))) == (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)182)))))));
    }
    var_31 = ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)4424))))), (((((/* implicit */_Bool) 6140176308761218666LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)96))) : (var_18)))))) ? ((~(((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (13218997646960657288ULL))))) : (((/* implicit */unsigned long long int) var_12)));
}
