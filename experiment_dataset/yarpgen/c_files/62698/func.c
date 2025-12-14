/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62698
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (signed char)-125);
        arr_3 [i_0] |= ((/* implicit */_Bool) (unsigned char)184);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            {
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) 1323596270U)) >= (16480935295096109177ULL)))) + (((/* implicit */int) (!(((/* implicit */_Bool) 550339387136150310LL)))))))), (16480935295096109184ULL)));
                arr_9 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_7 [i_1] [i_2] [i_1]))) ? (((/* implicit */unsigned long long int) 0U)) : (((((/* implicit */_Bool) (signed char)6)) ? (min((((/* implicit */unsigned long long int) 1726121328)), (1965808778613442439ULL))) : (((/* implicit */unsigned long long int) min((1726121328), (-671513971))))))));
                /* LoopSeq 2 */
                for (int i_3 = 1; i_3 < 9; i_3 += 2) /* same iter space */
                {
                    arr_12 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_1])) ? (16480935295096109184ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 8864814812112637456ULL)))) : (min((((/* implicit */unsigned long long int) var_7)), (17371820423657399831ULL))))) ^ (((/* implicit */unsigned long long int) (-(max((550339387136150310LL), (var_7))))))));
                    arr_13 [7] [i_3] [(unsigned short)0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(min((10325205307722129642ULL), (((/* implicit */unsigned long long int) 1224581165U))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1726121329)) ? (0U) : (((/* implicit */unsigned int) -671513971))))) ? (((/* implicit */unsigned int) min((-671513971), (((/* implicit */int) var_16))))) : (((((/* implicit */unsigned int) -1726121328)) / (3220182596U)))))) : (max((max((550339387136150310LL), (((/* implicit */long long int) 4294967290U)))), (((/* implicit */long long int) arr_0 [i_2]))))));
                }
                for (int i_4 = 1; i_4 < 9; i_4 += 2) /* same iter space */
                {
                    arr_16 [i_1] [i_1] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((-1726121319) < (-1726121319)))), (((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */unsigned long long int) 671513976)) : (1892353658080272901ULL)))));
                    arr_17 [i_1] [i_1] [i_2] [2ULL] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3U)) ? (((((/* implicit */_Bool) (signed char)-80)) ? (2147483647) : (((/* implicit */int) arr_14 [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4])))) : (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */int) (short)-1160)) : (((/* implicit */int) (unsigned short)28312))))));
                }
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_23 [i_5] [6] [i_5] = ((/* implicit */unsigned int) ((int) (signed char)-80));
                            arr_24 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((arr_4 [i_1]), (2147483647)));
                            arr_25 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) min((((/* implicit */short) arr_1 [i_5] [(unsigned short)2])), ((short)32766)))), ((+(var_8)))))), (1460794454714861789ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 1; i_8 < 14; i_8 += 4) 
        {
            for (unsigned int i_9 = 4; i_9 < 12; i_9 += 3) 
            {
                {
                    arr_34 [5] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) min((-1726121328), (-257676035)))), (min((arr_30 [i_7]), (((/* implicit */unsigned long long int) 1726121328)))))) + (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((short)1950), (((/* implicit */short) var_14)))))) + (4294967292U))))));
                    arr_35 [i_7] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((17942455652675040923ULL), (((/* implicit */unsigned long long int) var_5))))) ? (((unsigned long long int) arr_31 [i_7] [3] [i_9] [i_9])) : (((((/* implicit */_Bool) 13368214094929066893ULL)) ? (10325205307722129642ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3)))))))) ? (((/* implicit */int) ((_Bool) arr_31 [(signed char)2] [(signed char)2] [i_9 - 2] [i_9 + 1]))) : (((/* implicit */int) ((unsigned char) ((-671513971) >= (-257676054)))))));
                }
            } 
        } 
    } 
}
