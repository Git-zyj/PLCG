/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63543
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) var_3)), (arr_4 [i_0] [(_Bool)1]))))) * (((long long int) (unsigned short)255)))), (((/* implicit */long long int) max((1286791745), (((/* implicit */int) arr_1 [i_0] [i_1])))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        {
                            var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((var_8), ((unsigned short)65256))), (max((((/* implicit */unsigned short) (signed char)125)), ((unsigned short)65535)))))) ? (((((/* implicit */_Bool) arr_9 [(unsigned char)11] [i_3])) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (11))) : (((((/* implicit */_Bool) (~(arr_10 [6] [(unsigned char)9] [i_2])))) ? (min((((/* implicit */int) (signed char)117)), (-1286791734))) : (((/* implicit */int) (_Bool)0))))));
                            var_12 = ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3]);
                            var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 79863528U)) ? (((/* implicit */unsigned long long int) 26U)) : (5122536943243077185ULL)))) ? (max((14U), (((/* implicit */unsigned int) (_Bool)1)))) : ((-(4215103767U))))) & (1656726961U)));
                            var_14 = ((/* implicit */signed char) (((+((+(((/* implicit */int) (unsigned short)23941)))))) == (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)64020))))))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_3 [i_1] [i_0])) + (min((arr_6 [i_0] [i_1]), (((/* implicit */int) arr_1 [i_0] [i_1])))))) != ((~(((/* implicit */int) (unsigned char)57))))));
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) -1087530865);
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) : (5289603334770844566ULL)));
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
    {
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)165))) : (13324207130466474430ULL))) / (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-53)), (min((((/* implicit */unsigned int) (unsigned short)65281)), (var_2))))))));
                var_17 = ((/* implicit */unsigned int) arr_20 [i_5]);
                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) arr_20 [i_5])) >= (((/* implicit */int) (unsigned char)245)))))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (-885007839) : (((/* implicit */int) (short)-25871)))) - (((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)20)))))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7))))) | ((+(13324207130466474407ULL)))))));
}
