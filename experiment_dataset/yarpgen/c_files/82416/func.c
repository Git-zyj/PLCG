/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82416
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
    var_12 = ((/* implicit */signed char) ((short) ((((/* implicit */int) min((var_5), (((/* implicit */short) var_4))))) == (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (var_4))))) % (((((/* implicit */_Bool) var_9)) ? (var_1) : (var_8)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5340152805654324472LL)) ? (((/* implicit */unsigned int) -1954606058)) : (4294967288U)))) : (max((12299857986925573556ULL), (((/* implicit */unsigned long long int) 1954606065))))));
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_14 ^= ((/* implicit */_Bool) var_3);
                                arr_13 [i_2] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */int) ((short) 3513825094U))) + (2147483647))) >> (((((/* implicit */int) (unsigned short)19927)) - (19927)))))), (((((/* implicit */_Bool) ((unsigned char) var_10))) ? (((/* implicit */long long int) ((unsigned int) var_5))) : (((long long int) var_11))))));
                                arr_14 [i_1] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)8192)) : (((/* implicit */int) (short)(-32767 - 1))))) - (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) var_8)) : (((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) < (var_1))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_6)))))))));
                                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned short)48989))))) ? (((unsigned long long int) (unsigned short)19937)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)56355)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))) : (min((min((((/* implicit */unsigned int) (_Bool)1)), (2499208034U))), (((/* implicit */unsigned int) ((var_11) == (((/* implicit */unsigned long long int) var_7))))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((long long int) ((unsigned int) var_7))))));
    /* LoopNest 3 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 2) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    var_17 = ((unsigned long long int) ((((/* implicit */int) ((_Bool) var_9))) == (((/* implicit */int) var_4))));
                    var_18 |= ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (var_11)))))));
                    var_19 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned char) var_7))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (((unsigned short) var_10)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_8)))))) ? (var_7) : (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_6))) & (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))))))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1760048947U)) ? (((/* implicit */int) (short)15360)) : (((/* implicit */int) (short)13025))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_2)))) & (max((var_11), (((/* implicit */unsigned long long int) var_6))))))));
                                var_22 = ((/* implicit */short) var_10);
                                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_5)))))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_1)) : (var_11)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_9)) : (var_11)))) ? (min((var_10), (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_1)))))) : (var_10)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
