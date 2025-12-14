/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72276
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 4) 
                {
                    for (unsigned short i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        {
                            var_19 = (((+(((int) arr_9 [i_0] [i_2])))) ^ (((/* implicit */int) var_8)));
                            arr_10 [i_0] [i_1 - 1] [i_2] [i_3 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 1661966255)) == (1819274363774097475ULL)))) < (min(((+(((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) (unsigned short)10))))));
                        }
                    } 
                } 
                var_20 *= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_1 [i_1])), (((2498176684U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5)))))))) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((unsigned short) arr_5 [i_0] [6U] [i_1 + 1] [(unsigned char)0])))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 1) 
                {
                    for (unsigned int i_5 = 1; i_5 < 7; i_5 += 3) 
                    {
                        {
                            var_21 |= ((/* implicit */int) var_13);
                            var_22 &= ((/* implicit */unsigned short) arr_2 [(unsigned short)8] [i_1]);
                            arr_17 [i_0] [i_0] = ((/* implicit */_Bool) arr_3 [i_4] [i_1 - 1] [i_4]);
                            var_23 &= var_5;
                        }
                    } 
                } 
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)7))))) == (1072693248))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) ((((/* implicit */_Bool) 1056000017)) && (((/* implicit */_Bool) var_16)))))))));
    var_26 = ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (signed char i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        for (unsigned short i_7 = 1; i_7 < 13; i_7 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned short) (signed char)-47);
                            arr_26 [i_6] [(unsigned short)6] [i_8 + 1] [i_9] [11ULL] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_7 + 1] [i_9]))) | (arr_22 [i_7 + 1] [i_8 + 1] [i_9])))))));
                            arr_27 [(_Bool)1] [i_7] [i_8] [(short)6] [i_7] [i_9] = min((((/* implicit */int) (short)(-32767 - 1))), (((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (var_6)))) ? (((/* implicit */int) max(((signed char)-110), (var_16)))) : (((((/* implicit */_Bool) (unsigned short)29935)) ? (((/* implicit */int) arr_23 [i_9] [i_6])) : (((/* implicit */int) arr_24 [i_6] [i_6] [(_Bool)1] [i_6])))))));
                            var_28 = ((unsigned short) ((((/* implicit */_Bool) (unsigned short)47985)) ? (((/* implicit */int) (unsigned short)10)) : (1558994080)));
                            var_29 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)39)) ? (((/* implicit */int) (_Bool)1)) : (1015696795)));
                        }
                    } 
                } 
                arr_28 [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5071)) ? (((/* implicit */int) (signed char)-71)) : (1744971690)))) ? (((/* implicit */int) arr_24 [i_7] [i_7 - 1] [i_6] [i_6])) : (((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 12; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 14; i_11 += 4) 
                    {
                        {
                            var_30 *= ((/* implicit */unsigned short) ((arr_34 [i_6] [i_7 + 1] [2] [10ULL]) ? (((/* implicit */int) ((unsigned char) (unsigned short)19950))) : (((/* implicit */int) (_Bool)1))));
                            var_31 &= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((var_6) >> (((var_17) - (6630816448268441087ULL))))))))));
                            var_32 = ((/* implicit */_Bool) arr_30 [(unsigned short)5] [(unsigned short)5] [8]);
                            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)58610))) ? ((+(-2023833843))) : ((+(max((var_15), (((/* implicit */int) arr_23 [i_7] [i_10])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
